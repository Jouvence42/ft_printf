NAME =		libft.a

HEADER =	libft.h

CC = gcc 

CFLAGS = 

SRCS =			ft_strlen.c\
			ft_atoi.c\
			ft_isdigit.c\
			ft_strdup.c\
			ft_itoa.c\
			ft_putstr.c\
			ft_intlen.c\
			ft_putchar.c\
			ft_putnbr.c\
			ft_putstrprint.c\
			
OBJ = $(SRCS:.c=.o)

$(OBJ) = $(SRCS)

all :	$(NAME)

${NAME} :	${OBJ}
		ar rc ${NAME} ${OBJ}
		ranlib ${NAME}

%.o :	%.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -I $(HEADER)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : 
	fclean all

.PHONY :	all clean fclean re
