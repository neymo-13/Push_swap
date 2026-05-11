#include "push_swap.h"

void	op_pa(t_stack *a, t_stack *b, int print)
{
	t_node	*node;

	if (!b || !b->top)
		return ;
	node = b->top;
	b->top = node->next;
	b->size--;
	node->next = a->top;
	a->top = node;
	a->size++;
	if (print)
		ft_putstr_fd("pa\n", 1);
}

void	op_pb(t_stack *a, t_stack *b, int print)
{
	t_node	*node;

	if (!a || !a->top)
		return ;
	node = a->top;
	a->top = node->next;
	a->size--;
	node->next = b->top;
	b->top = node;
	b->size++;
	if (print)
		ft_putstr_fd("pb\n", 1);
}

void	op_ra(t_stack *a, int print)
{
	t_node	*first;
	t_node	*last;

	if (!a || a->size < 2)
		return ;
	first = a->top;
	last = a->top;
	while (last->next)
		last = last->next;
	a->top = first->next;
	first->next = NULL;
	last->next = first;
	if (print)
		ft_putstr_fd("ra\n", 1);
}

void	op_rb(t_stack *b, int print)
{
	t_node	*first;
	t_node	*last;

	if (!b || b->size < 2)
		return ;
	first = b->top;
	last = b->top;
	while (last->next)
		last = last->next;
	b->top = first->next;
	first->next = NULL;
	last->next = first;
	if (print)
		ft_putstr_fd("rb\n", 1);
}
