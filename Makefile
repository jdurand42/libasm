# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdurand <jdurand@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019\06/24 18:35:31 by jdurand           #+#    #+#              #
#    Updated: 2020/01/03 15:59:32 by jdurand          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libasm.a

SRCS	=	./srcs/ft_write.o ./srcs/ft_read.o ./srcs/ft_strcpy.o \
		./srcs/ft_strdup.o ./srcs/ft_strcmp.o ./srcs/ft_strlen.o	

OBJS	=	$(SRCS:.c=.o)

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

RM		=	rm -f

all		:	$(NAME)

$(NAME) :	
		NASM -f macho64 ./srcs/ft_write.s ;
		NASM -f macho64 ./srcs/ft_read.s ;
		NASM -f macho64 ./srcs/ft_strcpy.s ;
		NASM -f macho64 ./srcs/ft_strdup.s ;
		NASM -f macho64 ./srcs/ft_strcmp.s ;
		NASM -f macho64 ./srcs/ft_strlen.s ;
		ar -rc $(NAME) $(OBJS)

main 	:	
		gcc main.c libasm.a -o test_asm	

clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re	:	fclean	all

.PHONY	:	clean	fclean	all	bonus
