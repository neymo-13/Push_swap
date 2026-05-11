#include "push_swap.h"

static void	push_chunk_elements(t_stack *a, t_stack *b, int min, int max)
{
	int	scanned;

	scanned = 0;
	while (scanned < a->size && a->size > 3)
	{
		if (a->top->index >= min && a->top->index <= max)
		{
			assign_index(a);
			op_pb(a, b, 1);
			scanned = 0;
		}
		else
		{
			op_ra(a, 1);
			scanned++;
		}
	}
}

static void	push_to_b(t_stack *a, t_stack *b)
{
	int	chunk_size;
	int	min;
	int	max;
	int	total;

	total = a->size;
	chunk_size = 20;
	if (total > 100)
		chunk_size = 50;
	min = 0;
	max = chunk_size - 1;
	assign_index(a);
	while (a->size > 3)
	{
		push_chunk_elements(a, b, min, max);
		min = max + 1;
		max += chunk_size;
		if (max >= total - 1)
			max = total - 1;
	}
}

void	sort_big(t_stack *a, t_stack *b)
{
	push_to_b(a, b);
	assign_global_index(a, b);
	if (!stack_is_sorted(a))
		sort_three(a);
	while (b->size > 0)
		do_cheapest_move(a, b);
	rotate_min_to_top(a);
}
