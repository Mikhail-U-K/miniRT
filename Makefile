# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bdaedric <bdaedric@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/03 16:42:50 by bdaedric          #+#    #+#              #
#    Updated: 2020/11/13 12:26:12 by bdaedric         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= miniRT

SRC			= set_5.c \
              collision.c \
              cylinder_collision.c \
              init.c \
              light_and_shadows.c \
              main.c \
              map_errors.c \
              parser.c \
              plane_collision.c \
              rendering.c \
              screen_shot.c \
              set_2.c \
              set.c \
              set_3.c \
              set_4.c \
              set_6.c \
              sphere_collision.c \
              square_collision.c \
              triangle_collision.c \
              utils.c \
              utils_2.c \
              utils_3.c \
              libft/get_next_line.c \
              libft/ft_lstadd_front.c \
              libft/ft_lstnew.c \
              hooks.c

HEADER		= minirt.h

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