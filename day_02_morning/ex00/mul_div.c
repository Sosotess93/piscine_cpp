/*
** mul_div.c for ex00 in /home/armita_a/rendu/piscine_cpp_d02m/ex00
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Thu Jan  8 10:00:51 2015 armita_a
** Last update Thu Jan  8 10:11:53 2015 armita_a
*/

void	add_mul_4param(int first, int second, int *add, int *mul)
{
  if (!add || !mul)
    return ;
  else
    {
      *add = first + second;
      *mul = first * second;
    }
}


void	add_mul_2param(int *first, int *second)
{
  int	add;

  if (!first || !second)
    return ;
  else
    {
      add = *first + *second;
      *second *= *first;
      *first = add;
    }
}
