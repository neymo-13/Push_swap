#include "push_swap.h"

static int	get_target_min_pos(t_stack *a)
{
	t_node	*curr;
	int		pos;
	int		min_pos;
	int		min_rank;

	curr = a->top;
	pos = 0;
	min_pos = 0;
	min_rank = -1;
	while (curr)
	{
		if (min_rank == -1 || curr->index < min_rank)
		{
			min_rank = curr->index;
			min_pos = pos;
		}
		curr = curr->next;
		pos++;
	}
	return (min_pos);
}

static int	find_target_pos(t_stack *a, int b_global_rank)
{
	t_node	*curr;
	int		pos;
	int		best_pos;
	int		best_rank;

	curr = a->top;
	pos = 0;
	best_pos = -1;
	best_rank = -1;
	while (curr)
	{
		if (curr->index > b_global_rank)
		{
			if (best_rank == -1 || curr->index < best_rank)
			{
				best_rank = curr->index;
				best_pos = pos;
			}
		}
		curr = curr->next;
		pos++;
	}
	if (best_pos == -1)
		return (get_target_min_pos(a));
	return (best_pos);
}

static void	calc_cost(t_stack *a, t_stack *b)
{
	t_node	*node;
	int		b_pos;
	int		a_pos;

	node = b->top;
	b_pos = 0;
	while (node)
	{
		node->above_mid_b = (b_pos <= b->size / 2);
		if (node->above_mid_b)
			node->cost_b = b_pos;
		else
			node->cost_b = b->size - b_pos;
		a_pos = find_target_pos(a, node->index);
		node->above_mid_a = (a_pos <= a->size / 2);
		if (node->above_mid_a)
			node->cost_a = a_pos;
		else
			node->cost_a = a->size - a_pos;
		node = node->next;
		b_pos++;
	}
}

static int	get_real_cost(t_node *node)
{
	if (node->above_mid_a == node->above_mid_b)
	{
		if (node->cost_a > node->cost_b)
			return (node->cost_a);
		return (node->cost_b);
	}
	return (node->cost_a + node->cost_b);
}

void	do_cheapest_move(t_stack *a, t_stack *b)
{
	t_node	*curr;
	t_node	*cheapest;
	int		min_cost;
	int		current_cost;

	calc_cost(a, b);
	curr = b->top;
	cheapest = curr;
	min_cost = get_real_cost(curr);
	while (curr)
	{
		current_cost = get_real_cost(curr);
		if (current_cost < min_cost)
		{
			min_cost = current_cost;
			cheapest = curr;
		}
		curr = curr->next;
	}
	move_both(a, b, cheapest);
	op_pa(a, b, 1);
}
