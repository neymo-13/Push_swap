NAME		= push_swap
BONUS_NAME	= checker

CC			= cc
CFLAGS		= -Wall -Wextra -Werror
INCLUDES	= -I./include
LIBFT_DIR	= libft
LIBFT		= $(LIBFT_DIR)/libft.a

SRCS		= src/main.c \
			  src/utils.c \
			  src/stack_ops.c \
			  src/operations1.c \
			  src/operations2.c \
			  src/operations3.c \
			  src/parse.c \
			  src/sort_small.c \
			  src/sort_big.c \
			  src/cost.c \
			  src/index.c \
			  src/rotate_utils.c

OBJS		= $(SRCS:.c=.o)

all: $(LIBFT) $(NAME) 

$(LIBFT):
	@make -s -C $(LIBFT_DIR)

$(NAME): $(OBJS) $(LIBFT)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME) -L./$(LIBFT_DIR) -lft

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@ -I./$(LIBFT_DIR)

clean:	
	@rm -f $(OBJS)
	@make -s -C $(LIBFT_DIR) clean

fclean:	clean
	@rm -f $(NAME)
	@make -s -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
