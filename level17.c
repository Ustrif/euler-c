#include <stdio.h>

#define one 3
#define two 3
#define three 5
#define four 4
#define five 4
#define six 3
#define seven 5
#define eight 5
#define nine 4
#define twenty 6
#define thirty 6
#define forty 5
#define fifty 5
#define sixty 5
#define seventy 7
#define eighty 6
#define ninety 6
#define hundred 7
#define thousand 8

#define one_to_nine 36
#define ten_to_nineteen 70

/*

If the numbers 1
to 5
are written out in words: one, two, three, four, five, then there are 3 +3 +5 +4 +4 =19
letters used in total.

If all the numbers from 1
to 1000
(one thousand) inclusive were written out in words, how many letters would be used?

NOTE: Do not count spaces or hyphens. For example, 342
(three hundred and forty-two) contains 23
letters and 115
(one hundred and fifteen) contains 20
letters. The use of "and" when writing out numbers is in compliance with British usage.

*/

int	calc_hundred()
{
	int	sum;

	sum = 0;
	sum += 100 * (one + hundred + 3) -3;
	sum += 100 * (two + hundred + 3) -3;
	sum += 100 * (three + hundred + 3) -3;
	sum += 100 * (four + hundred + 3) -3;
	sum += 100 * (five + hundred + 3) -3;
	sum += 100 * (six + hundred + 3) -3;
	sum += 100 * (seven + hundred + 3) -3;
	sum += 100 * (eight + hundred + 3) -3;
	sum += 100 * (nine + hundred + 3) -3;
	sum += one + thousand;
	return (sum);
}

int	calc_twenty_to_ninety()
{
	int	sum;

	sum = 0;
	sum += 10 * (10 * twenty + one_to_nine);
	sum += 10 * (10 * thirty + one_to_nine);
	sum += 10 * (10 * forty + one_to_nine);
	sum += 10 * (10 * fifty + one_to_nine);
	sum += 10 * (10 * sixty + one_to_nine);
	sum += 10 * (10 * seventy + one_to_nine);
	sum += 10 * (10 * eighty + one_to_nine);
	sum += 10 * (10 * ninety + one_to_nine);
	sum += 10 * (one_to_nine);
	sum += 10 * (ten_to_nineteen);
	return (sum);
}

int	main (void)
{
	int	result;

	result = calc_hundred() + calc_twenty_to_ninety();
	printf("result: %d \n", result); //result: 21124
}
