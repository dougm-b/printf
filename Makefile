# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: domoreir <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/10 17:37:54 by domoreir          #+#    #+#              #
#    Updated: 2024/08/10 17:37:56 by domoreir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c ft_printchar.c ft_printhex.c ft_printnbr.c \
ft_printpercent.c ft_printptr.c ft_printstr.c ft_printunsigned.c
    
NAME = libftprintf.a
LIBC = ar rcs
RM = rm -f
OBJS = $(SRCS:.c=.o)

LIBFT_PATH		=	./libft
LIBFT			=	$(LIBFT_PATH)/libft.a

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS} -o ${NAME}
	
$(LIBFT):
	make -C $(LIBFT_PATH) all
					
					
%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@
    
all: ${NAME}

clean:
	${RM} ${OBJS}
fclean: clean
	${RM} ${NAME}
re: fclean all

.PHONY : all clean fclean re libft
