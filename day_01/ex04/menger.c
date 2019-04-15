/*
** menger.c for ex01 in /home/armita_a/rendu/piscine_cpp_d01/ex01
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Wed Jan  7 15:35:57 2015 armita_a
** Last update Thu Jan  8 00:50:16 2015 armita_a
*/

#include <stdio.h>
#include "drawing.h"

void	my_print_coor(int size, int x, int y, uint32_t ** img)
{
  t_point coor;

  coor.x = x;
  coor.y = y;
  if (size == 1)
    draw_square(img, &coor, size, 0xFFFFFF);
  else if (size == 3)
    draw_square(img, &coor, size, 0x7F7F7F);
  else
    draw_square(img, &coor, size, 0x555555);
}


void	my_recursive(int x, int y, int size, int level, uint32_t ** img)
{
  size /= 3;
  my_print_coor(size, x + size, y + size, img);
  if (size / 3 > 0 && level > 1)
    {
      level--;
      my_recursive(x, y, size, level, img);
      my_recursive(x, y + size, size, level, img);
      my_recursive(x, y + 2 * size, size, level, img);
      my_recursive(x + size, y, size, level, img);
      my_recursive(x + size, y + 2 *size, size, level, img);
      my_recursive(x + 2 * size, y, size, level, img);
      my_recursive(x + 2 * size, y + size, size, level, img);
      my_recursive(x + 2 * size , y + 2 * size, size, level, img);
    }
  else
    return ;
}

void	menger(int size, int level, uint32_t ** img)
{
  my_recursive(0, 0, size, level ,img);
}
