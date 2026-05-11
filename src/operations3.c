#include "push_swap.h"

void	op_rr(t_stack *a, t_stack *b, int print)
{
	op_ra(a, 0);
	op_rb(b, 0);
	if (print)
		ft_putstr_fd("rr\n", 1);
}

void	op_rra(t_stack *a, int print)
{
	t_node	*curr;
	t_node	*prev;

	if (!a || a->size < 2)
		return ;
	curr = a->top;
	prev = NULL;
	while (curr->next)
	{
		prev = curr;
		curr = curr->next;
	}
	prev->next = NULL;
	curr->next = a->top;
	a->top = curr;
	if (print)
		ft_putstr_fd("rra\n", 1);
}

void	op_rrb(t_stack *b, int print)
{
	t_node	*curr;
	t_node	*prev;

	if (!b || b->size < 2)
		return ;
	curr = b->top;
	prev = NULL;
	while (curr->next)
	{
		prev = curr;
		curr = curr->next;
	}
	prev->next = NULL;
	curr->next = b->top;
	b->top = curr;
	if (print)
		ft_putstr_fd("rrb\n", 1);
}

void	op_rrr(t_stack *a, t_stack *b, int print)
{
	op_rra(a, 0);
	op_rrb(b, 0);
	if (print)
		ft_putstr_fd("rrr\n", 1);
}
