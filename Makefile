NAME =		libftprintf.a

SRC_DIR =	srcs/
SRC_FILES =	ft_printf.c\
		ft_parsing.c\
		ft_printstruct.c\
		main.c\

OBJS =		${addprefix ${SRC_DIR},${SRC_FILES:.c=.o}}

CFLAGS =	

LIBFT =		libft.a
LIBDIR =	libft

HEADER =	-I includes -I ${LIBDIR}

.c.o:
	gcc ${CFLAGS} ${HEADER} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
	make -C ${LIBDIR}
	cp ${LIBDIR}/${LIBFT} ${NAME}
	ar -vrc ${NAME} ${OBJS}

all :		${NAME}

clean :
	make fclean -C ${LIBDIR}
	rm -f ${OBJS}

fclean :	clean
	rm -f ${NAME}

re :	fclean all

.PHONY : all clean fclean re
