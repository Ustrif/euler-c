#include <stdio.h>
#include <math.h>

/*


A palindromic number reads the same both ways. The largest palindrome made from the product of two 2
-digit numbers is 9009 =91 ×99
.

Find the largest palindrome made from the product of two 3
-digit numbers.


*/

int reverseNum(int N)
{
	int	rev;
	
	rev = 0;
	while (N > 0)
	{
		int dig = N % 10;
		rev = rev * 10 + dig;
		N /= 10;
	}
	return (rev);
}

int isPalindrome(int N)
{
	if (N < 0)
		return (0);
	return (N == reverseNum(N));
}

int	main (void)
{
	int	the_biggest_palindrome;

	the_biggest_palindrome = 0;

	for (int i = 999; i >= 900; i--)
	{
		for (int y = 999; y >= 900; y--)
		{
			int	res = i * y;
			if (isPalindrome(res) && res > the_biggest_palindrome)
				the_biggest_palindrome = res;
		}
	}
	printf("res: %d\n", the_biggest_palindrome); // res: 906609
	return (0);
}
