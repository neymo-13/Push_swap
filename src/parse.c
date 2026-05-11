#include "push_swap.h"

static int	is_valid_integer(char *str)
{
	int	i;

	i = 0;
	if (!str || str[0] == '\0')
		return (0);
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

static int	has_duplicate(t_stack *stack, int value)
{
	t_node	*curr;

	curr = stack->top;
	while (curr)
	{
		if (curr->value == value)
			return (1);
		curr = curr->next;
	}
	return (0);
}

static void	free_split(char **split)
{
	int	i;

	if (!split)
		return ;
	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

static void	parse_single_arg(char *arg, t_stack *a)
{
	char	**tokens;
	int		i;
	int		overflow;
	int		val;

	tokens = ft_split(arg, ' ');
	if (!tokens || !tokens[0])
	{
		free_split(tokens);
		error_exit(a, NULL);
	}
	i = -1;
	while (tokens[++i])
	{
		if (!is_valid_integer(tokens[i]))
			(free_split(tokens), error_exit(a, NULL));
		val = ft_atoi_safe(tokens[i], &overflow);
		if (overflow || has_duplicate(a, val))
			(free_split(tokens), error_exit(a, NULL));
		stack_push_node(a, val);
	}
	free_split(tokens);
}

t_stack	*parse_args(int argc, char **argv)
{
	t_stack	*a;
	int		i;
	t_node	*prev;
	t_node	*curr;
	t_node	*next;

	a = stack_new();
	if (!a)
		return (NULL);
	i = 0;
	while (++i < argc)
		parse_single_arg(argv[i], a);
	prev = NULL;
	curr = a->top;
	while (curr)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	a->top = prev;
	return (a);
}
