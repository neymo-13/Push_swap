#include "push_swap.h"

t_stack	*stack_new(void)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->top = NULL;
	stack->size = 0;
	return (stack);
}

void	stack_push_node(t_stack *stack, int value)
{
	t_node	*node;

	node = (t_node *)malloc(sizeof(t_node));
	if (!node)
		return ;
	node->value = value;
	node->index = 0;
	node->cost_a = 0;
	node->cost_b = 0;
	node->above_mid_a = 0;
	node->above_mid_b = 0;
	node->next = stack->top;
	stack->top = node;
	stack->size++;
}

void	stack_free(t_stack *stack)
{
	t_node	*curr;
	t_node	*next;

	if (!stack)
		return ;
	curr = stack->top;
	while (curr)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
	free(stack);
}

int	stack_is_sorted(t_stack *stack)
{
	t_node	*curr;

	if (!stack || !stack->top || !stack->top->next)
		return (1);
	curr = stack->top;
	while (curr->next)
	{
		if (curr->value > curr->next->value)
			return (0);
		curr = curr->next;
	}
	return (1);
}

int	stack_pos_of_min(t_stack *stack)
{
	t_node	*curr;
	int		min_val;
	int		min_pos;
	int		pos;

	if (!stack || !stack->top)
		return (0);
	curr = stack->top;
	min_val = curr->value;
	min_pos = 0;
	pos = 0;
	while (curr)
	{
		if (curr->value < min_val)
		{
			min_val = curr->value;
			min_pos = pos;
		}
		curr = curr->next;
		pos++;
	}
	return (min_pos);
}
