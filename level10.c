#include <stdio.h>

#define N 2000000


/*


The sum of the primes below 10
is 2 +3 +5 +7 =17.

Find the sum of all the primes below two million.


*/

// optimized isPrime method.
int isPrime(int n)
{
    if (n <= 1)
        return (0);

    if (n == 2 || n == 3)
        return (0);

    if (n % 2 == 0 || n % 3 == 0)
        return (0);
    
    for (int i = 5; i*i<=n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return (0);

    return (1);
}

int	main (void)
{
	unsigned long long	primes[250001];

	for (int i = 0; i < 250001; i++) primes[i] = 0;

	primes[0] = 2;
	primes[1] = 3;
	primes[2] = 5;
	primes[3] = 7;
 
	int	index = 4;
	for (unsigned long long i = 11; index != 250001; i += 2)
	{
		if (isPrime(i))
		{
			primes[index] = i;
			if (i >= N)
			{
				break ;
			}
			index++;
		}
	}

	unsigned long long result;

	result = 0;
	for (int i = 0; i < index; i++)
	{
		result += primes[i];
	}
 	printf("result: %lld \n", result); // result: 142913828922  

	return (0);
}
