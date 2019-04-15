##
## Makefile for ex01 in /home/armita_a/rendu/piscine_cpp_d01/ex01
## 
## Made by armita_a
## Login   <armita_a@epitech.net>
## 
## Started on  Wed Jan  7 12:44:19 2015 armita_a
## Last update Wed Jan  7 16:05:36 2015 armita_a
##

NAME	= menger

SRC	= main.c	\
	menger.c

OBJ	= $(SRC:.c=.o)

CFLAGS	= -Wextra -Werror -Wall -std=gnu99

$(NAME):$(OBJ)
	$(CC) $(OBJ) -o $(NAME)

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
