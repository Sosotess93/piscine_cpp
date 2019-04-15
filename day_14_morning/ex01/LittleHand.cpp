//
// LittleHand.cpp for ex01 in /home/armita_a/rendu/piscine_cpp_d14m/ex01
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Tue Jan 20 13:31:18 2015 armita_a
// Last update Wed Jan 21 08:49:27 2015 armita_a
//

#include "Banana.h"
#include "Lemon.h"
#include "Lime.h"
#include "LittleHand.h"

void	LittleHand::sortFruitBox(FruitBox &unsorted, FruitBox &lemons,
				 FruitBox &bananas, FruitBox &Limes)
{
  FruitNode		*tmp;
  Fruit			*f;
  Fruit			*t;
  int			index = 0;
  int			st = unsorted.nbFruits();

  tmp = unsorted.head();
  if (!tmp)
    return ;
  while (index < st)
    {
      t = tmp->data;
      if (dynamic_cast<Banana *>(t))
	{
	  if (!bananas.putFruit((f = unsorted.pickFruit())))
	    unsorted.putFruit(f);
	}
      else if (dynamic_cast<Lime *>(t))
	{
	  if (!Limes.putFruit((f = unsorted.pickFruit())))
	    unsorted.putFruit(f);
	}
      else if (dynamic_cast<Lemon *>(t))
	{
	  if (!lemons.putFruit((f = unsorted.pickFruit())))
	      unsorted.putFruit(f);
	}
            tmp = tmp->next;
      index++;
    }
}
