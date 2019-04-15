/*
** white_rabbit.c for ex00 in /home/armita_a/rendu/piscine_cpp_d01/ex00
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Wed Jan  7 09:18:56 2015 armita_a
** Last update Thu Jan  8 08:20:56 2015 armita_a
*/

#include <stdio.h>
#include <stdlib.h>

int	follow_the_white_rabbit(void)
{
  int	ret = 0;
  int	dice;
  int	rabbit = 0;

  dice = -1;
  while (rabbit != 1)
    {
      dice = abs(random() % 37 + 1);
      ret += dice;
      if (((dice >= 4 && dice <= 6)
	   || (dice == 28))
	  || (dice >= 17 && dice <= 21))
	printf("gauche\n");
      if (dice == 15 || dice == 23 || dice  == 10)
	printf("devant\n");
      if ((dice == 26) || (dice % 8 == 0))
	printf("derriere\n");
      if (dice == 13 || dice >= 34 && dice < 37)
	printf("droite\n");
      if (dice == 1 || dice == 37 || ret >= 397)
	  rabbit = 1;
    }
  printf("LAPIN !!!\n");
  return ret;
}
