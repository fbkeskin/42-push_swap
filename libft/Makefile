SRCS =		ft_lstadd_back.c	\
			ft_atoi.c			\
			ft_lstadd_front.c	\
			ft_lstlast.c		\
			ft_lstnew.c			\
			ft_lstsize.c		\
			ft_split.c

OBJS = $(SRCS:.c=.o)

CC = gcc

RM = rm -rf

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
