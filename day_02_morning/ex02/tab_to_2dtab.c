/*
** tab_to_2dtab.c for ex02 in /home/armita_a/rendu/piscine_cpp_d02m/ex02
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Thu Jan  8 11:09:32 2015 armita_a
** Last update Thu Jan  8 16:36:51 2015 armita_a
*/

#include <stdlib.h>

void	tab_to_2dtab(int *tab, int length, int width, int ***res)
{
 int	x = 0;
  int	y = 0;
  int	index = 0;
  int	**ret = *res;

  if (!(ret = malloc(sizeof(int *) * (width + 2))))
    return ;
  while (x < length)
    if (!(ret[x++] = malloc(sizeof(int) * (length) + 1)))
      return ;
  ret = ret;
  x = 0;
  while (x < length )
    {
      while (y < width)
	ret[x][y++] = tab[index++];
      ret[x][y] = '\0';
      y = 0;
      x++;
    }
  ret[x] = NULL;
  *res = ret;
}
