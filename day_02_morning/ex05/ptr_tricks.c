/*
** ptr_tricks.c for ex05 in /home/armita_a/rendu/piscine_cpp_d02m/ex05
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Thu Jan  8 14:28:49 2015 armita_a
** Last update Fri Jan  9 00:18:59 2015 armita_a
*/

#include "ptr_tricks.h"

int get_array_nb_elem(int *ptr1, int *ptr2)
{
  int	index = 0;

  if (ptr1 > ptr2)
    {
      int tmp;
      tmp =  *ptr1;
      ptr1 = ptr2;
      ptr2 = &tmp;
    }
  while (ptr1 != ptr2)
    {
      ptr1++;
      index++;
    }
  return index;
}

t_whatever	*get_struct_ptr(int *member_ptr)
{
  return (t_whatever*)(member_ptr
		       - get_array_nb_elem(member_ptr,
					   &((t_whatever*)member_ptr)->member));
}
