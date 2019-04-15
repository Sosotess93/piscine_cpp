/*
** func_ptr.c for ex03 in /home/armita_a/rendu/piscine_cpp_d02m/ex03
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Thu Jan  8 12:43:34 2015 armita_a
** Last update Thu Jan  8 13:51:19 2015 armita_a
*/

#include <stdio.h>
#include "func_ptr.h"

static t_ptr g_ptr[] = { { PRINT_NORMAL, &print_normal },
			 { PRINT_REVERSE, &print_reverse },
			 { PRINT_UPPER, &print_upper },
			 { PRINT_42, &print_42 } };

int	my_strlen(char *str)
{
  int	index = 0;

  while (str && str[index])
    index++;
  return index;
}

void	print_normal(char *str)
{
  if (str)
    printf("%s\n", str);
}

void	print_reverse(char *str)
{
  int	index = 0;
  if (str)
    {
      index = my_strlen(str) - 1;
      while (index >= 0)
	printf("%c", str[index--]);
    }
  printf("\n");
}

void	print_upper(char *str)
{
  int	index = 0;

  if (str)
    {
      while (index < my_strlen(str))
	{
	  if (str[index] >= 97 && str[index] <= 122)
	    printf("%c", str[index] - 32);
	  else
	    printf("%c", str[index]);
	  index++;
	}
      printf("\n");
    }
}

void	print_42(char *str)
{
  (void)str;
  printf("42\n");
}

void	do_action(t_action action, char *str)
{
  int	index = 0;

  while (action != g_ptr[index].act)
    {

      index++;
    }
  g_ptr[index].func(str);
}
