#include <stdio.h>

#define N 10000 // N is big for stackoverflow

int	main (void)
{
	char	sum[N + 1];

	for (int i = 0; i <= N; i++)	sum[i] = '\0';

	sum[0] = '1'; // for the first multiple.

	int	carry;
	int	index;

	for (int i = 0; i < 1000; i++)
	{
		carry = 0;
		index = 0;
		for (int y = 0; sum[y] != '\0'; y++)
		{
			if ((sum[y] - 48) * 2 + carry >= 10)
			{
				sum[y] = (((sum[y] - 48) * 2) + carry ) % 10 + 48;
				carry = 1;
			}
			else
			{
				sum[y] = (((sum[y] - 48) * 2) + carry) + 48;
				carry = 0;
			}
			if (sum[y + 1] == '\0')
			{
				sum[y + 1] = carry + 48;
				break ;
			}
		}
	}
	unsigned long long	result;

	result = 0;
	for (int i = 0; i <= N; i++)
	{
		if (sum[i] == '\0')
			break ;
		result += sum[i] - 48;
	}
	printf("%lld \n", result); // 1366
	return (0);
}
