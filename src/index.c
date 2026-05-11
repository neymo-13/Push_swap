#include "push_swap.h"

void	assign_index(t_stack *stack)
{
	t_node	*curr_s;
	t_node	*cmp;
	int		rank;

	curr_s = stack->top;
	while (curr_s)
	{
		rank = 0;
		cmp = stack->top;
		while (cmp)
		{
			if (cmp->value < curr_s->value)
				rank++;
			cmp = cmp->next;
		}
		curr_s->index = rank;
		curr_s = curr_s->next;
	}
}

static int	get_global_rank(t_stack *a, t_stack *b, int value)
{
	t_node	*cmp;
	int		rank;

	rank = 0;
	cmp = a->top;
	while (cmp)
	{
		if (cmp->value < value)
			rank++;
		cmp = cmp->next;
	}
	cmp = b->top;
	while (cmp)
	{
		if (cmp->value < value)
			rank++;
		cmp = cmp->next;
	}
	return (rank);
}

void	assign_global_index(t_stack *a, t_stack *b)
{
	t_node	*curr;

	curr = a->top;
	while (curr)
	{
		curr->index = get_global_rank(a, b, curr->value);
		curr = curr->next;
	}
	curr = b->top;
	while (curr)
	{
		curr->index = get_global_rank(a, b, curr->value);
		curr = curr->next;
	}
}
