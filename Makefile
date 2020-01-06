# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdurand <jdurand@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019\06/24 18:35:31 by jdurand           #+#    #+#              #
#    Updated: 2020/01/03 19:31:21 by jdurand          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libasm.a

SRCS	=	./srcs/ft_write.o ./srcs/ft_read.o ./srcs/ft_strcpy.o \
		./srcs/ft_strdup.o ./srcs/ft_strcmp.o ./srcs/ft_strlen.o

OBJS	=	$(SRCS:.c=.o)

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

RM		=	rm -rf

BONUS	=	./bonus/ft_list_size.o ft_bonus.o ./bonus/ft_list_push_front.o

all		:	$(NAME)

$(NAME) :
		NASM -f macho64 ./srcs/ft_write.s ;
		NASM -f macho64 ./srcs/ft_read.s ;
		NASM -f macho64 ./srcs/ft_strcpy.s ;
		NASM -f macho64 ./srcs/ft_strdup.s ;
		NASM -f macho64 ./srcs/ft_strcmp.s ;
		NASM -f macho64 ./srcs/ft_strlen.s ;
		ar -rc $(NAME) $(OBJS)

bonus	:
		NASM -f macho64 ./srcs/ft_write.s ;
		NASM -f macho64 ./srcs/ft_read.s ;
		NASM -f macho64 ./srcs/ft_strcpy.s ;
		NASM -f macho64 ./srcs/ft_strdup.s ;
		NASM -f macho64 ./srcs/ft_strcmp.s ;
		NASM -f macho64 ./srcs/ft_strlen.s ;
		NASM -f macho64 ./bonus/ft_list_size.s ;
		NASM -f macho64 ./bonus/ft_list_push_front.s ;
		gcc -c ./bonus/ft_bonus.c ;
		ar -rc libasm_bonus.a $(OBJS) $(BONUS)

main 	: clean
		gcc main.c libasm.a -o test_asm

main_bonus	: clean
		gcc main_bonus.c libasm_bonus.a -o test_bonus

sani	: clean
		gcc -fsanitize=address -g3 main.c libasm.a -o test_sani

clean	:
			$(RM) $(OBJS) $(BONUS)

fclean	:	clean
			$(RM) $(NAME) libasm_bonus.a test_asm test_sani test_sani.DSYM

re	:	fclean	all

.PHONY	:	clean	fclean	all	bonus
