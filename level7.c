#include <stdio.h>

int	main (void)
{
	unsigned long long	primes[10002];

	for (int i = 0; i < 10002; i++) primes[i] = 0;

	primes[0] = 2;
	primes[1] = 3;
	primes[2] = 5;
	primes[3] = 7;
 
	int	flag = 0;
	int	index = 4;
	for (unsigned long long i = 8; index != 10001; i++)
	{
		for (int y = 0; primes[y] != 0; y++)
		{
			if (i % primes[y] == 0)
				flag = 1;
			if (flag)
				break ;
		}
		if (!flag)
		{
			primes[index] = i;
			index++;
		}
		flag = 0;
	}
	printf("result: %lld \n", primes[10000]); // result: 104743 

	return (0);
}
