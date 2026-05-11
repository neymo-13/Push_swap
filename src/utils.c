#include "push_swap.h"

long	ft_atol(char *str)
{
	long	result;
	int		sign;
	int		i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		if (result * sign > (long)INT_MAX || result * sign < (long)INT_MIN)
			return (result * sign);
		i++;
	}
	return (result * sign);
}

int	ft_atoi_safe(char *str, int *overflow)
{
	long	val;

	val = ft_atol(str);
	if (val > (long)INT_MAX || val < (long)INT_MIN)
	{
		*overflow = 1;
		return (0);
	}
	*overflow = 0;
	return ((int)val);
}

void	error_exit(t_stack *a, t_stack *b)
{
	if (a)
		stack_free(a);
	if (b)
		stack_free(b);
	ft_putstr_fd("Error\n", 2);
	exit(1);
}
