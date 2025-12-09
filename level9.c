#include <stdio.h>

/*


A Pythagorean triplet is a set of three natural numbers, 𝑎 <𝑏 <𝑐
, for which,
𝑎2+𝑏2=𝑐2.

For example, 32 +42 =9 +16 =25 =52
.

There exists exactly one Pythagorean triplet for which 𝑎 +𝑏 +𝑐 =1000
.
Find the product 𝑎⁢𝑏⁢𝑐
.


*/

int	main(void)
{
	int	a = 8;
	int	b = 15;
	int c = 17;

	// 8, 15, 17 is special triangle.
	// a + b + c = 40
	// 40 * 25 = 1000;

	a *= 25;
	b *= 25;
	c *= 25;

	printf("res: %d\n", a*b*c); // res: 31875000
	return (0);
}
