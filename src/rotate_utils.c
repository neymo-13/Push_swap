#include "push_swap.h"

void	rotate_to_top_a(t_stack *a, int cost, int above_mid)
{
	if (above_mid)
	{
		while (cost-- > 0)
			op_ra(a, 1);
	}
	else
	{
		while (cost-- > 0)
			op_rra(a, 1);
	}
}

void	rotate_to_top_b(t_stack *b, int cost, int above_mid)
{
	if (above_mid)
	{
		while (cost-- > 0)
			op_rb(b, 1);
	}
	else
	{
		while (cost-- > 0)
			op_rrb(b, 1);
	}
}

void	move_both(t_stack *a, t_stack *b, t_node *cheapest)
{
	if (cheapest->above_mid_a && cheapest->above_mid_b)
	{
		while (cheapest->cost_a > 0 && cheapest->cost_b > 0)
		{
			op_rr(a, b, 1);
			cheapest->cost_a--;
			cheapest->cost_b--;
		}
	}
	else if (!cheapest->above_mid_a && !cheapest->above_mid_b)
	{
		while (cheapest->cost_a > 0 && cheapest->cost_b > 0)
		{
			op_rrr(a, b, 1);
			cheapest->cost_a--;
			cheapest->cost_b--;
		}
	}
	rotate_to_top_a(a, cheapest->cost_a, cheapest->above_mid_a);
	rotate_to_top_b(b, cheapest->cost_b, cheapest->above_mid_b);
}

void	rotate_min_to_top(t_stack *a)
{
	int	min_pos;

	min_pos = stack_pos_of_min(a);
	if (min_pos <= a->size / 2)
	{
		while (min_pos-- > 0)
			op_ra(a, 1);
	}
	else
	{
		min_pos = a->size - min_pos;
		while (min_pos-- > 0)
			op_rra(a, 1);
	}
}
