#include <sys/types.h>
#include <math.h>
#include <stdio.h>
#include <stdbool.h>

void sieve(bool primes[], int limit) 
{
    for (int i = 0; i <= limit; i++)
        primes[i] = true;
    primes[0] = primes[1] = false;

    for (int i = 2; i * i <= limit; i++) {
        if (primes[i]) {
            for (int j = i * i; j <= limit; j += i)
                primes[j] = false;
        }
    }
}

int main(void)
{
	const long long n = 600851475143LL;
    int up;
	
	up = (int)sqrt(n);
    bool primes[up + 1];
    sieve(primes, up);
    long long max = 0;
    for (int i = 2; i <= up; i++) {
        if (primes[i] && n % i == 0)
            max = i;
    }

    printf("%lld\n", max); // 6857
    return 0;
}

