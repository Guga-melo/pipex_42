NAME	= pipex.a

SRCS	= ./source/get_path.c

OBJS	= $(SRCS:.c=.o)

.c.o:
			cc $(CFLAGS) -c $< -o $(<:.c=.o) -I ./include

RM		= rm -f

CFLAGS	= -Wall -Werror -Wextra

$(NAME):	$(OBJS)
			make -C ./libft
			cp ./libft/libft.a $(NAME)
			ar rcs $(NAME) $(OBJS)
			cc $(NAME) -o pipex

all:		$(NAME)

clean:
			make clean -C ./libft
			$(RM) $(OBJS)

fclean:		clean
			make fclean -C ./libft
			$(RM) $(NAME) pipex

re:			fclean all

.PHONY: all clean fclean re
