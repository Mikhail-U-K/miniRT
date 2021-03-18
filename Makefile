# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bdaedric <bdaedric@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/03 16:42:50 by bdaedric          #+#    #+#              #
#    Updated: 2021/03/18 15:42:37 by bdaedric         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= miniRT

SRC			= srcs/set_5.c \
              srcs/collision.c \
              srcs/cylinder_collision.c \
              srcs/init.c \
              srcs/light_and_shadows.c \
              srcs/main.c \
              srcs/map_errors.c \
              srcs/parser.c \
              srcs/plane_collision.c \
              srcs/rendering.c \
              srcs/screen_shot.c \
              srcs/set_2.c \
              srcs/set.c \
              srcs/set_3.c \
              srcs/set_4.c \
              srcs/set_6.c \
              srcs/sphere_collision.c \
              srcs/square_collision.c \
              srcs/triangle_collision.c \
              srcs/utils.c \
              srcs/utils_2.c \
              srcs/utils_3.c \
              libft/get_next_line.c \
              libft/ft_lstadd_front.c \
              libft/ft_lstnew.c \
              srcs/hooks.c

HEADER		= srcs/minirt.h

OBJS		= ${SRC:.c=.o}

LIBFT		= make all -C libft

MINILIBX    = make -C minilibx

FLAGS		= -Wall -Wextra -Werror

FRAMEWORKS	= -framework OpenGL -framework AppKit

RM			= rm -f

MOVE        = cp minilibx/libmlx.dylib .

all:	${NAME}

.c.o:
		gcc ${FLAGS} -I. -c $< -o ${<:.c=.o}

${NAME}: ${OBJS} ${HEADER}
		${LIBFT}
		${MINILIBX}
		${MOVE}
		gcc ${FLAGS} ${OBJS} -o ${NAME} -L. -I. libft/libft.a minilibx/libmlx.dylib ${FRAMEWORKS}

clean:
		${RM} ${OBJS}
		make clean -C libft
		make clean -C minilibx

fclean:	clean
		${RM} ${NAME}
		make fclean -C libft
		make clean -C minilibx
re:		fclean all

.PHONY:		re all clean fclean
