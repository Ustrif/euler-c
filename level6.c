#include <stdio.h>

#define N 100

int	main (void)
{
	long long	sum_of_one_hundred_numbers;

	sum_of_one_hundred_numbers = N * (N + 1) / 2;

	long long	sum_of_squares_to_n;

	sum_of_squares_to_n = (N * (N + 1) * (2 * N + 1)) / 6;

	printf("result: %lld \n", (sum_of_one_hundred_numbers * sum_of_one_hundred_numbers) - sum_of_squares_to_n);
	// result: 25164150 
	return (0);
}
