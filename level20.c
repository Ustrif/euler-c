#include <stdio.h>
#include <string.h>

#define BUFFER 1000

/*
For example, 5! = 5.4.3.2.1 = 60 ,
and the sum of the digits in the number
is 6 + 0 = 6.

Find the sum of the digits in the number 100!.
*/

int multipler(int a)
{
	static char mem[BUFFER];
	char		buffer[BUFFER];

	if (a == -1)
	{
		memset(mem, 0, BUFFER);
		mem[0] = '1'; 
		return (0);
	}
	if (a == -2)
	{
		printf("%s \n", mem);
		return (0);
	}
	if (a == -3)
	{
		int	sum;

		sum = 0;
		for (int i = 0; mem[i]; i++)
		{
			sum += (mem[i] - '0');
		}
		return (sum);
	}

	memset(buffer, 0, BUFFER);
	if (strlen(mem) > 0) 
		memcpy(buffer, mem, strlen(mem));

	for (int i = 1; i < a; i++)
	{
		int carry = 0;
		int y = 0;

		for (; buffer[y] || carry; y++)
		{
			int val_mem = (y < strlen(mem)) ? (mem[y] - '0') : 0;
			int val_buf = (buffer[y]) ? (buffer[y] - '0') : 0;

			int sum = val_buf + val_mem + carry;

			buffer[y] = (sum % 10) + '0';
			carry = sum / 10;
		}
		buffer[y] = '\0';
	}

	memcpy(mem, buffer, strlen(buffer) + 1);
	return (0);
}

int	main( void )
{
	int	arr[100];

	for (int i = 1; i <= 100; i++) arr[i - 1] = i;

	int	two = 0;

	for (int i = 0; i < 100; i++)
	{
		if (arr[i] % 10 == 0)
			arr[i] = arr[i] / 10;
		if (arr[i] % 5 == 0)
		{
			two++;
			arr[i] = (arr[i] * 2) / 10;
		}
		if (arr[i] % 2 == 0 && two)
		{
			arr[i] = arr[i] / 2;
			two--;
		}
	} // main purpose to throw 10's and its multiples because 0 is uncessary for sum.

	for (int i = 0; i < 100; i++)
	{
		if (arr[i] % 5 == 0)
		{
			two++;
			arr[i] = (arr[i] * 2) / 10;
		}
		if (arr[i] % 2 == 0 && two)
		{
			arr[i] = arr[i] / 2;
			two--;
		}
	}

	multipler(-1);
	
	for (int i = 0; i < 100; i++)
	{
		multipler(arr[i]);
	}

	printf("%d\n", multipler(-3)); // 648
	return (0);
}
