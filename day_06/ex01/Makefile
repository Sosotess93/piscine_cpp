##
## Makefile for ex01 in /home/armita_a/rendu/piscine_cpp_d06/ex01
## 
## Made by armita_a
## Login   <armita_a@epitech.net>
## 
## Started on  Mon Jan 12 10:59:25 2015 armita_a
## Last update Mon Jan 12 11:30:31 2015 armita_a
##

NAME	= my_convert_temp

SRC	= main.cpp

OBJ	= $(SRC:.cpp=.o)

CFLAGS	= -Wall -Wextra -W

$(NAME):$(OBJ)
	g++ $(OBJ) -o $(NAME)
	@echo -e "[032m$(NAME) compiled successfully[0m"

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
