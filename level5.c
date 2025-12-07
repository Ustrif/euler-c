#include <stdio.h>

/*


2520
is the smallest number that can be divided by each of the numbers from 1
to 10
without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1
to 20
?


*/

	// 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20
	/*
		1 divides every number. Throw.
		if 16 divides a number a number contains 4, 2. Throw 2, 4, 8.

	// 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20
	->
	// 3, 5, 6, 7, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20

		I need one fine. 
	
	// 3, 5, 6, 7, 9, 11, 12, 13, 14, 15, 16, 17, 18, 19

		I need two 3's.
	
	// 5, 7, 9, 11, 13, 14, 16, 17, 19

		I need one 7.
	
	// 5, 7, 9, 11, 13, 16, 17, 19

		That's it.
*/

int	main (void)
{
	const int prime_dividers[] = {5, 7, 9, 11, 13, 16, 17, 19, -1}; // -1 for finish.
	int	result;

	result = 1;
	for (int i = 0; prime_dividers[i] != -1; i++)
	{
		result *= prime_dividers[i];
	}
	printf("result: %d\n", result); 	// result: 232792560
	return (0);
}
