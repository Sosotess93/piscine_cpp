/*
** func_ptr.h for ex03 in /home/armita_a/rendu/piscine_cpp_d02m/ex03
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Thu Jan  8 13:04:11 2015 armita_a
** Last update Thu Jan  8 13:52:24 2015 armita_a
*/


#ifndef FUNC_PTR_H_
# define FUNC_PTR_H_

#include "func_ptr_enum.h"

/*
** func_ptr.c
*/
void	print_42(char *str);
void	print_normal(char *str);
void	print_reverse(char *str);
void	print_upper(char *str);
void	do_action(t_action action, char *str);

typedef struct	s_ptr
{
  t_action	act;
  void		(*func)(char *str);
}		t_ptr;

#endif /* !FUNC_PTR_H_ */
