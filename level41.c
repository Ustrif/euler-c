#include <stdio.h>

/*
We shall say that an n-digit number is pandigital if it makes use of all the digits 1 to n 
exactly once. For example, 2143 is a 4-digit pandigital and is also prime.

What is the largest n-digit pandigital prime that exists?
*/

int isPrime(int n)
{
	if (n <= 1)
		return (0);
	
	if (n == 2 || n == 3)
		return (1);

	if (n % 2 == 0 || n % 3 == 0)
		return (0);

	for (int i = 5; i*i<=n; i = i + 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return (0);

	return (1);
}

int	check_digits(size_t	num, int digit_num)
{
	int nums[] = {0,0,0,0,0,0,0,0,0,0};
	while (num > 0)
	{
		int	index = num % 10;
		if (index > digit_num)
			return (1);
		nums[index]++;
		if (index == 0 || nums[index] > 1)
			return (1);
		num /= 10;
	}
	return (0);
}

int	main (void)
{
	size_t	result;

	result = 0;
	
	int	digit_num = 4;
	for (size_t i = 2143; i <= 987654321; i += 2)
	{
		if (i == 100000001)
			digit_num = 9;
		if (i == 10000001)
			digit_num = 8;
		if (i == 1000001)
			digit_num = 7;
		if (i == 100001)
			digit_num = 6;
		if (i == 10001)
			digit_num = 5;

		if (!check_digits(i, digit_num))
		{
			if (isPrime(i))
				result = i;
		}
	}
	printf("result: %ld\n", result); // result: 7652413
	return (0);
}
