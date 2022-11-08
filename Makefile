NAME			=	cub3d.a
CFLAGS			=	-Wall -Werror -Wextra

#------------- FILES --------------#

SRC				=	src/main.c \
					src/free.c \
					src/save.c \
					src/init.c \
					src/color.c \
					src/parsers.c \
					src/handlers.c \
					src/rendering.c \
					src/del_spaces.c \
					src/map_checker.c \
					src/height_malloc.c

OBJS 			=	${SRC:.c=.o}

HEADER			=	include/cub3d.h \
					mlx/mlx.h \
					mlx/mlx_png.h \
					mlx/mlx_int.h \
					mlx/mlx_opengl.h \
					mlx/mlx_new_window.h \
					libs/Libft/include/libft.h \
					libs/Get_Next_Line/include/get_next_line.h \

RM 				=	rm -f

.c.o:	
	make -C libs/Libft
	make -C libs/Get_Next_Line
	make -C mlx
	gcc -c ${CFLAGS} -Imlx $< -o ${<:.c=.o}

all:		${NAME}

${NAME}:	${OBJS} ${HEADER}
			ar rc ${NAME} ${OBJS}
			gcc ${CFLAGS} -Lmlx -lmlx -framework OpenGL -framework AppKit libs/Get_Next_Line/get_next_line.a libs/Libft/libft.a mlx/libmlx.a ${NAME} -o cub3d

clean:
			${RM} ${OBJS}
			make clean -C libs/Libft
			make clean -C libs/Get_Next_Line
			make clean -C mlx

fclean:		clean
			${RM} ${NAME}
			${RM} cub3d
			make fclean -C libs/Get_Next_Line
			make fclean -C libft

re:			fclean all

.PHONY:		all clean fclean re