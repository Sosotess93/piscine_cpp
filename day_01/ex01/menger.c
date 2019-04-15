/*
** menger.c for ex01 in /home/armita_a/rendu/piscine_cpp_d01/ex01
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Wed Jan  7 15:35:57 2015 armita_a
** Last update Thu Jan  8 00:22:39 2015 armita_a
*/

#include <stdio.h>

void	my_print_coor(int size, int x, int y)
{
  printf("%.3d %.3d %.3d\n", size, x, y);
}


void	my_recursive(int x, int y, int size, int level)
{
  size /= 3;
  my_print_coor(size, x + size, y + size);
  if (size / 3 > 0 && level > 1)
    {
      level--;
      my_recursive(x, y, size, level);
      my_recursive(x, y + size, size, level);
      my_recursive(x, y + 2 * size, size, level);
      my_recursive(x + size, y, size, level);
      my_recursive(x + size, y + 2 *size, size, level);
      my_recursive(x + 2 * size, y, size, level);
      my_recursive(x + 2 * size, y + size, size, level);
      my_recursive(x + 2 * size , y + 2 * size, size, level);
    }
  else
    return ;
}

void	menger(int size, int level)
{
  my_recursive(0, 0, size, level);
}
