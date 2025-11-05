#include <sys/types.h>
#include <math.h>
#include <stdio.h>

int	main (void)
{
	size_t	result;

	result = 0;
	for (int i = 0; i < 1000; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			result += i;
	}
	printf("%ld\n", result); // 233168
	return (0);
}
