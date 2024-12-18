NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I./includes

LIBFT = LIBFT
FILES = ft_printf ft_print_c ft_print_s ft_print_p ft_print_d ft_print_u ft_print_x
SRC = $(addsuffix .c, $(FILES))
OBJ = $(SRC:.c=.o)

DEF_COLOR = \033[0;39m
RED = \033[1;91m
GREEN = \033[1;92m

all: $(LIBFT) $(NAME)

$(NAME): $(OBJ)
	@make -C $(LIBFT)
	@cp LIBFT/libft.a .
	@mv libft.a $(NAME)
	@ar rcs $(NAME) $(OBJ)
	@echo "$(GREEN)FT_PRINTF compilation success!$(DEF_COLOR)"
	@echo "$(GREEN)LIBFT compilation success!$(DEF_COLOR)"
%.o: %.c
	$(CC) $(CFLAGS) -I$(LIBFT) -c $< -o $@

test: $(OBJ)
	# @make -C $(LIBFT)
	# @cp LIBFT/libft.a .
	# @mv libft.a $(NAME)
	@$(CC) $(OBJ) $(CFLAGS) -o printf_test
	@echo "$(GREEN)FT_PRINTF main compilation success!$(DEF_COLOR)"
	@echo "$(GREEN)LIBFT compilation success!$(DEF_COLOR)"
	@./printf_test
clean:
	@rm -f $(OBJ)
	$(MAKE) -C $(LIBFT) clean
	@echo "$(GREEN)FT_PRINTF objects files cleaned!$(DEF_COLOR)"
	@echo "$(GREEN)LIBFT objects files cleaned!$(DEF_COLOR)"

fclean: clean
	@rm -f $(NAME) printf_test.o printf_test
	@$(MAKE) -C $(LIBFT) fclean
	@echo "$(GREEN)FT_PRINTF executable files cleaned!$(DEF_COLOR)"
	@echo "$(GREEN)LIBFT objects files cleaned!$(DEF_COLOR)"

re: fclean all

.PHONY: all clean fclean re test
