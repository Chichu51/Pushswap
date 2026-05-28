NAME = push_swap.a

MY_FONCTIONS = ft_push_swap.c \
				ft_check_arg.c \
			   ft_stack.c \
			   sa_sb_ss.c

MY_UTILS = ft_check_utils.c \
		   fonction_utiles.c


MY_SRCS_ALL = $(MY_FONCTIONS) $(MY_UTILS)

MY_OBJECTS = $(MY_SRCS_ALL:.c=.o)

CC = cc

CFLAGS = -Wall -Werror -Wextra

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(MY_OBJECTS)
	ar rcs $(NAME) $(MY_OBJECTS)

clean:
	rm -f $(MY_OBJECTS)

fclean:
	rm -f $(MY_OBJECTS)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
