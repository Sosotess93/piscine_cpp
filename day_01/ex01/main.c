/*
** main.c for ex01 in /home/armita_a/rendu/piscine_cpp_d01/ex01
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Wed Jan  7 14:13:13 2015 armita_a
** Last update Wed Jan  7 15:56:17 2015 armita_a
*/

#include <stdio.h>

#define FAILURE 0
#define SUCCESS	1

static int g_size;
static int g_level;

void	menger(int, int);

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

int	max_size(int size)
{
  int	nb = -1;

  while (size > 0)
    {
      size /= 3;
      nb++;
    }
  return nb;
}

int	check_args(char *s1, char *s2)
{
  if (check_if_is_only_num(s1) == FAILURE
      ||check_if_is_only_num(s2) == FAILURE)
    return FAILURE;
  g_size = my_getnbr(s1);
  g_level = my_getnbr(s2);
  if ((g_level != 0 && (g_level > max_size(g_size))) || g_size == g_level)
    return FAILURE;
  return SUCCESS;
}

int	main(int ac, char **av)
{
  if (ac != 3 || check_args(av[1], av[2]) == FAILURE)
    return FAILURE;
  if (g_level == 0)
    return SUCCESS;
  menger(g_size, g_level);
  return SUCCESS;
}
