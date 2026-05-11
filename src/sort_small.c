#include "push_swap.h"

void	sort_two(t_stack *a)
{
	if (!a || a->size < 2)
		return ;
	if (a->top->value > a->top->next->value)
		op_sa(a, 1);
}

static int	get_rank(int val, int t, int m, int b)
{
	int	rank;

	rank = 0;
	if (t < val)
		rank++;
	if (m < val)
		rank++;
	if (b < val)
		rank++;
	return (rank);
}

void	sort_three(t_stack *a)
{
	int	t;
	int	m;
	int	b;
	int	rt;

	t = a->top->value;
	m = a->top->next->value;
	b = a->top->next->next->value;
	rt = get_rank(t, t, m, b);
	if (rt == 0 && m > b)
	{
		op_sa(a, 1);
		op_ra(a, 1);
	}
	else if (rt == 1 && m < b)
		op_sa(a, 1);
	else if (rt == 1 && m > b)
		op_rra(a, 1);
	else if (rt == 2 && m < b)
		op_ra(a, 1);
	else if (rt == 2 && m > b)
	{
		op_ra(a, 1);
		op_sa(a, 1);
	}
}

void	sort_four(t_stack *a, t_stack *b)
{
	rotate_min_to_top(a);
	op_pb(a, b, 1);
	if (!stack_is_sorted(a))
		sort_three(a);
	op_pa(a, b, 1);
}

void	sort_five(t_stack *a, t_stack *b)
{
	rotate_min_to_top(a);
	op_pb(a, b, 1);
	rotate_min_to_top(a);
	op_pb(a, b, 1);
	if (!stack_is_sorted(a))
		sort_three(a);
	op_pa(a, b, 1);
	op_pa(a, b, 1);
}
