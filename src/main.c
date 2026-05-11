#include "push_swap.h"

static void	sort_stack(t_stack *a, t_stack *b)
{
	if (stack_is_sorted(a))
		return ;
	if (a->size == 2)
		sort_two(a);
	else if (a->size == 3)
		sort_three(a);
	else if (a->size == 4)
		sort_four(a, b);
	else if (a->size == 5)
		sort_five(a, b);
	else
	{
		sort_big(a, b);
	}
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	if (argc < 2)
		return (0);
	a = parse_args(argc, argv);
	if (!a)
		return (1);
	if (!a->top)
	{
		stack_free(a);
		return (0);
	}
	b = stack_new();
	if (!b)
	{
		stack_free(a);
		return (1);
	}
	sort_stack(a, b);
	stack_free(a);
	stack_free(b);
	return (0);
}
