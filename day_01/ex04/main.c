/*
** main.c for ex01 in /home/armita_a/rendu/piscine_cpp_d01/ex01
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Wed Jan  7 14:13:13 2015 armita_a
** Last update Thu Jan  8 00:56:23 2015 armita_a
*/

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <string.h>
#include "drawing.h"
#include "bitmap.h"

#define FAILURE 0
#define SUCCESS	1

static unsigned int g_size;
static unsigned int g_level;

void	menger(int, int, uint32_t **);

int	my_getnbr(char *str)
{
  int   index = 0;
  int	nb = 0;
  int	is_neg;

  while (str[index] == '-' || str[index] == '+')
    index++;
  if (index % 2 == 0)
    is_neg = 1;
  else
    is_neg = -1;
  nb = 0;
  while (str[index] >= '0' && str[index] <= '9')
    nb = (nb * 10) +str[index++] - 48;
  return is_neg * nb;
}

int	check_if_is_only_num(char *str)
{
  int	index = 0;

  while (str && str[index])
    {
      if (str[index] < '0' || str[index] > '9')
	return FAILURE;
      index++;
    }
  return SUCCESS;
}

unsigned int	max_size(unsigned int size)
{
  unsigned int	nb = -1;

  while (size > 0)
    {
      size /= 3;
      nb++;
    }
  return nb;
}

int	check_args(char *s2, char *s3)
{
  if (check_if_is_only_num(s2) == FAILURE
      ||check_if_is_only_num(s3) == FAILURE)
    return FAILURE;
  g_size = my_getnbr(s2);
  g_level = my_getnbr(s3);
  if ((g_level != 0 && (g_level > max_size(g_size))) || g_size == g_level)
    return FAILURE;
  return SUCCESS;
}

void	create_img(char *name, unsigned int *buffer)
{
  t_bmp_header header;
  t_bmp_info_header info;

  make_bmp_header(&header, g_size);
  make_bmp_info_header(&info, g_size);

  int d = open(name, O_CREAT | O_TRUNC | O_WRONLY, 0644);
  write(d, &header, sizeof(header));
  write(d, &info, sizeof(info));
  write(d, buffer, g_size * g_size * sizeof(*buffer));
  close(d);
}
int	main(int ac, char **av)
{
  if (ac != 4 || check_args(av[2], av[3]) == FAILURE)
    return FAILURE;

  uint32_t **img;
  t_point  point;
  unsigned int *buffer;

  point.x = 0;
  point.y = 0;

  buffer = malloc(g_size * g_size * sizeof(*buffer));
  img = malloc(g_size * sizeof(*img));
  memset(buffer, 0, g_size * g_size * sizeof(*buffer));
  for (size_t i = 0; i < g_size; ++i)
    img[i] = buffer + i * g_size;
  draw_square(img, &point, g_size, 0x000000);
  if (g_level == 0)
    {
      create_img(av[1], buffer);
      return SUCCESS;
    }
  menger(g_size, g_level, img);
  create_img(av[1], buffer);
  return SUCCESS;
}
