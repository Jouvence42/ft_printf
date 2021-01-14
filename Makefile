NAME =		libftprintf.a

SRC_DIR =	srcs/

SRC_FILES =	ft_printf.c\
		ft_parsing.c\
		ft_printstruct.c\
		main.c\

OBJS =		${addprefix ${SRC_DIR},${SRC_FILES:.c=.o}}

CFLAGS =	

CC =		gcc

LIBFT =		libft.a

LIBDIR =	libft/

HEADER =	includes/libftprintf.h

all :		${LIBFT} ${NAME}

${NAME} :	${OBJS} ${HEADER}
		@cp ${LIBDIR}${LIBFT} ./${NAME}
		ar rc ${NAME} ${OBJS}
		ranlib ${NAME}

$(LIBFT) :
		@make -C ${LIBDIR}

%.o :		${SRC_DIR}%.c ${HEADER} ${LIBDIR}${LIBFT}
			${CC} ${CFLAGS} -c $< -I ${HEADER}

clean :
	@make clean -C ${LIBDIR}
	rm -f ${OBJS}

fclean :	clean
	@make clean -C ${LIBDIR}
	rm -f ${NAME}

re :	fclean all

.PHONY : all clean fclean re
