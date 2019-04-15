/*
** mem_ptr.c for piscine_cpp_d02m in /home/armita_a/rendu/piscine_cpp_d02m
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Thu Jan  8 10:13:59 2015 armita_a
** Last update Thu Jan  8 11:07:21 2015 armita_a
*/

#include <stdlib.h>

#ifndef MEM_PTR_H
#define MEM_PTR_H

typedef struct s_str_op
{
  char*str1;
  char*str2;
  char*res;
}	t_str_op;

#endif /* MEM_PTR_H */


int	my_strlen(char *str)
{
  int	index = 0;

  while (str && str[index])
    index++;

  return index;
}

void	add_str(char *str1, char *str2, char **res)
{
  int	index = 0;
  int	count = 0;
  char	*ptr;

  if (!str1 || !str2)
    return ;

  *res = malloc((sizeof(char) * my_strlen(str1)) + (sizeof(char) * my_strlen(str2)) + 1);
  if (!res)
    return ;
  ptr = *res;
  while (str1 && str1[index])
    ptr[count++] = str1[index++];
  index = 0;
  while (str2  && str2[index])
    ptr[count++] = str2[index++];
  ptr[count] = '\0';
}

void	add_str_struct(t_str_op *str_op)
{
  int	index = 0;
  int	count = 0;

  if ( !str_op || !str_op->str1 || !str_op->str2)
    return ;
  if (!(str_op->res = malloc(my_strlen(str_op->str1) + my_strlen(str_op->str2) + 1)))
    return ;
  while (str_op && str_op->str1 && str_op->str1[count])
    str_op->res[index++] = str_op->str1[count++];
  count = 0;
  while (str_op && str_op->str2 && str_op->str2[count])
    str_op->res[index++] = str_op->str2[count++];
  str_op->res[index] ='\0';
}
