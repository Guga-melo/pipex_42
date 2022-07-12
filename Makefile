NAME	= pipex.a

SRCS	= 

OBJS	= $(SRCS:.c=.o)

.c.o:
			cc $(CFLAGS) -c $< -o $(<:.c=.o) -I ./include

RM		= rm -f

CFLAGS	= -Wall -Werror -Wextra

$(NAME):	$(OBJS)
			make -C ./Libft
			cp ./Libft/libft.a ./pipex.a
			ar rcs $(NAME) $(OBJS)

all:		$(NAME)

clean:
			make clean -C ./Libft
			$(RM) $(OBJS)

fclean:		clean
			make fclean -C ./Libft
			$(RM) $(NAME)

re:			fclean all

.PHONY: all clean fclean re
