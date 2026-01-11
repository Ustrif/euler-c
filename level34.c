#include <stdio.h>

/*
145 is curious number. 1! + 4! + 5! = 145.
Find sum of all curious numbers.
1! and 2! is not included.
*/

size_t	fact(size_t num)
{
	size_t	sum;

	if (!num)
		return (1);
	for (sum = 1; num != 1; num--)
	{
		sum *= num;
		if (num - 1 == 6)
		{
			// for performance
			sum *= 720;
			break ;
		}
		else if (num - 1 == 4)
		{
			// for performance
			sum *= 24;
			break ;
		}
	}
	return (sum);
}


int	main (void)
{
	// digit * 9! is max value each number.
	// for example. 1 billion is 1.000.000.000 but max value of factorials are 3.628.800. 10 * 9!

	// 1.000.000, 7 * 9! = 2540160 it's up limit for us.

	// i = 3 because 1, 2 not included.
	size_t	result;

	result = 0;
	for (size_t i = 3; i <= 2540160; i++)
	{
		size_t	sum = 0;
		size_t	y = i;
		while (y > 0)
		{
			sum += fact(y % 10);
			if (sum > i)
			{
				break ;
			}
			y /= 10;
		}
		if (i == sum)
		{
			result += i;
		}
	}
	printf("result: %ld\n", result); // 40730
	return (0);
}
