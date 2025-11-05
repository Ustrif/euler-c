#include <sys/types.h>
#include <math.h>
#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}

int	main (void)
{
	size_t		result;
	const int	limit = 4000000;
	int			i;
	int			temp;

	i = 0;
	result = 0;
	while (1)
	{
		temp = ft_fibonacci(i);
		if (temp > limit)
			break ;
		if (temp % 2 == 0)
			result += temp;
		i++;
	}
	printf("%ld\n", result); // 4613732
	return (0);
}
