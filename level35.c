#include <stdio.h>

/*
The number, 97 is called a circular prime because all rotations of the digits:
97 and 79 are themselves prime.
How many circular primes are there below one million?
*/

// optimized isPrime method.
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

void	shifted(int* series, int num)
{
	for (int i = 0; num > 0; i++)
	{
		series[i] = (num % 10);
		num /= 10;
	}
}

int	power(int base, int pow)
{
	if (pow == 0)
		return (1);
	int	sum;
	for (sum = base; pow != 1; pow--)
	{
		sum *= base;
	}
	return (sum);
}

int	shift(int series[])
{
	int	temp = series[0];
	for (int i = 1; series[i] != -1; i++)
	{
		int	num = series[i];
		series[i] = temp;
		temp = num;
	}
	series[0] = temp;

	int	result = 0;
	for (int i = 0; series[i] != -1; i++)
	{
		result += series[i] * power(10, i);
	}
	return (result);
}

int	main (void)
{
	int	result;

	result = 0;
	for (int i = 1; i <= 999999 ; i++)
	{
		if (isPrime(i))
		{
			int series[7] = {-1, -1, -1, -1, -1, -1, -1};
			int	num = i;
			while (1)
			{
				shifted(series, num);
				num = shift(series);
				if (num == i)
				{
					// printf("%d\n", num); to see numbers
					result++;
					break ;
				}
				if (!isPrime(num))
					break ;
			}
		}
	}
	printf("result: %d\n", result); // result: 55
	return (0);
}
