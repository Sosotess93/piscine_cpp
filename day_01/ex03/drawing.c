/*
** drawing.c for ex03 in /home/armita_a/rendu/piscine_cpp_d01/ex03
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Wed Jan  7 19:07:28 2015 armita_a
** Last update Wed Jan  7 22:52:04 2015 armita_a
*/

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "drawing.h"
#include "bitmap.h"

void	draw_square(uint32_t ** img, t_point * orig, size_t size, uint32_t color)
{
  unsigned int	x = orig->x;
  unsigned int	y = orig->y;

  while (x < orig->x + size )
    {
      while (y < orig->y +size)
	img[x][y++] = color;
      y = orig->y;
      x++;
    }
}
