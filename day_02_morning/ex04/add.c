/*
** add.c for ex04 in /home/armita_a/rendu/piscine_cpp_d02m/ex04
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Thu Jan  8 13:58:27 2015 armita_a
** Last update Thu Jan  8 14:09:27 2015 armita_a
*/

#ifndef ABS

# define ABS(x)  (x<0)?-x:x

# endif /* ABS */

int normal_add(int a, int b)
{
  return a + b;
}

int	absolute_add(int a, int b)
{
  return ABS(a + b);
}

void	exec_add(t_add *operation)
{
}
