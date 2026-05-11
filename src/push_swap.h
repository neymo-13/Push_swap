#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <libft.h>

typedef struct s_node
{
	int				value;
	int				index;
	int				cost_a;
	int				cost_b;
	int				above_mid_a;
	int				above_mid_b;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	t_node	*top;
	int		size;
}	t_stack;

/* stack_ops.c */
t_stack		*stack_new(void);
void		stack_push_node(t_stack *stack, int value);
void		stack_free(t_stack *stack);
int			stack_is_sorted(t_stack *stack);
int			stack_pos_of_min(t_stack *stack);

/* operations123.c */
void		op_sa(t_stack *a, int print);
void		op_sb(t_stack *b, int print);
void		op_ss(t_stack *a, t_stack *b, int print);

void		op_pa(t_stack *a, t_stack *b, int print);
void		op_pb(t_stack *a, t_stack *b, int print);
void		op_ra(t_stack *a, int print);
void		op_rb(t_stack *b, int print);

void		op_rr(t_stack *a, t_stack *b, int print);
void		op_rra(t_stack *a, int print);
void		op_rrb(t_stack *b, int print);
void		op_rrr(t_stack *a, t_stack *b, int print);

/* utils.c */
int			ft_atoi_safe(char *str, int *overflow);
long		ft_atol(char *str);
void		error_exit(t_stack *a, t_stack *b);

/* parse.c */
t_stack		*parse_args(int argc, char **argv);

/* sort_small.c */
void		sort_two(t_stack *a);
void		sort_three(t_stack *a);
void		sort_four(t_stack *a, t_stack *b);
void		sort_five(t_stack *a, t_stack *b);

/* sort_big.c */
void		sort_big(t_stack *a, t_stack *b);

/* cost.c */
void		do_cheapest_move(t_stack *a, t_stack *b);

/* index.c */
void		assign_index(t_stack *stack);
void		assign_global_index(t_stack *a, t_stack *b);

/* rotate_utils.c */
void		rotate_to_top_a(t_stack *a, int cost, int above_mid);
void		rotate_to_top_b(t_stack *b, int cost, int above_mid);
void		move_both(t_stack *a, t_stack *b, t_node *cheapest);
void		rotate_min_to_top(t_stack *a);

#endif
