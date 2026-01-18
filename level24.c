#include <stdio.h>

/*
A permutation is an ordered arrangement of objects. For example, 3124 is one possible permutation of the digits 
1, 2, 3 and 4. If all of the permutations are listed numerically or alphabetically, we call it lexicographic order. 
The lexicographic permutations of 0, 1 and 2 are:

012   021   102   120   201   210

What is the millionth lexicographic permutation of the digits 0, 1, 2, 3, 4, 5, 6, 7, 8 and 9?
*/

// hold 0, 1, 2. other digits has 7! combinations. this is less.
// hold 0. 9! = 362880 its not enough.
// swap 0 and 1. 9! + 9! = 725760
// swap 0 and 2. 3. 9! is much. 
// hold 2 and 0. 2.9! = 725760.
// we will use this.
// the first number for 2013456789 and it's index 725760 + 1.

int	check(size_t num)
{
	int	series[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
	int	index = 0;

	while (num)
	{
		series[num % 10] = 1;
		num /= 10;
	}
	for (int i = 0; i < 10; i++)
	{
		if (series[i] == -1)
			return (0);
	}
	return (1);
}

int	main (void)
{
	size_t	number = 2013456789;
	int		index = 725760;

	while (index != 1000000)
	{
		if (check(number))
		{
			index++;
		}
		number++;
	}
	number--;
	printf("number: %zu \n", number); // 2783915460
	return (0);
}
