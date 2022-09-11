NAME = libft.a

#SRCS := $(shell find . -name '*.c')
SRCS = ft_printf.c

OBJS := $(SRCS:.c=.o)

# BONUS	= ft_lstadd_back.c \
# 		ft_lstadd_front.c \
# 		ft_lstclear.c \
# 		ft_lstdelone.c \
# 	       	ft_lstiter.c \
# 	       	ft_lstlast.c \
# 		ft_lstmap.c \
# 	       	ft_lstnew.c \
# 	       	ft_lstsize.c

# BONUS_OBJS = $(BONUS:%.c=%.o)

all: $(NAME)

.c.o:
	gcc -Wall -Wextra -Werror -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: clean fclean all re