/*
** div.c for ex04 in /home/armita_a/rendu/piscine_cpp_d02m/ex04
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Thu Jan  8 13:55:26 2015 armita_a
** Last update Thu Jan  8 14:28:24 2015 armita_a
*/

int	integer_div(int a, int b)
{
  if (b == 0)
    return 0;
  return a / b;
}

float	decimale_div(int a, int b)
{
  if (b == 0)
    return 0;
  return  (float)(a / b);
}

void exec_div(t_div *operation);
{
  if (operation->div_type == INTEGER)
    integer_div(operation-
  res = operation->div_op;
}
