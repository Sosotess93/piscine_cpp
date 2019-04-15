/*
** drawing.h for ex03 in /home/armita_a/rendu/piscine_cpp_d01/ex03
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Wed Jan  7 19:06:41 2015 armita_a
** Last update Wed Jan  7 22:46:24 2015 armita_a
*/

#ifndef DRAWING_H_
# define DRAWING_H_

#include <stdint.h>

typedef struct	s_point
{
  unsigned int	x;
  unsigned int	y;
}		t_point;

void    draw_square(uint32_t ** img, t_point * orig, size_t size, uint32_t color);

#endif /* !DRAWING_H_ */
