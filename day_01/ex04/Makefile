##
## Makefile for ex04 in /home/armita_a/rendu/piscine_cpp_d01/ex04
## 
## Made by armita_a
## Login   <armita_a@epitech.net>
## 
## Started on  Wed Jan  7 23:07:36 2015 armita_a
## Last update Thu Jan  8 00:00:41 2015 armita_a
##

NAME	= menger_face

SRC	= drawing.c	\
	bitmap_header.c	\
	menger.c	\
	main.c

OBJ	= $(SRC:.c=.o)

CFLAGS	= -Wall -Wextra -Werror -std=c99

$(NAME):$(OBJ)
	$(CC) $(OBJ) -o $(NAME)

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
