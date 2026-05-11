#include "push_swap.h"

void	op_sa(t_stack *a, int print)
{
	t_node	*first;
	t_node	*second;

	if (!a || a->size < 2)
		return ;
	first = a->top;
	second = first->next;
	first->next = second->next;
	second->next = first;
	a->top = second;
	if (print)
		ft_putstr_fd("sa\n", 1);
}

void	op_sb(t_stack *b, int print)
{
	t_node	*first;
	t_node	*second;

	if (!b || b->size < 2)
		return ;
	first = b->top;
	second = first->next;
	first->next = second->next;
	second->next = first;
	b->top = second;
	if (print)
		ft_putstr_fd("sb\n", 1);
}

void	op_ss(t_stack *a, t_stack *b, int print)
{
	op_sa(a, 0);
	op_sb(b, 0);
	if (print)
		ft_putstr_fd("ss\n", 1);
}
