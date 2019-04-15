//
// LittleHand.cpp for ex01 in /home/armita_a/rendu/piscine_cpp_d14m/ex01
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Tue Jan 20 13:31:18 2015 armita_a
// Last update Tue Jan 20 15:02:10 2015 armita_a
//

#include "LittleHand.h"

void	LittleHand::sortFruitBox(FruitBox &unsorted, FruitBox &lemons,
				 FruitBox &bananas, FruitBox &Limes)
{
  FruitNode		*tmp;
  Fruit			*f;
  std::string		name;

  tmp = unsorted.head();
  if (!tmp)
    return ;
  while (tmp)
    {
      name = tmp->data->getName();
      if (name == "banana")
	{
	  if (!bananas.putFruit((f = unsorted.pickFruit())))
	  unsorted.putFruit(f);
	}
      else if (name == "lemon")
	{
	  if (!lemons.putFruit((f = unsorted.pickFruit())))
	  unsorted.putFruit(f);
	}
      else if (name == "lime")
	{
	  if (!Limes.putFruit((f = unsorted.pickFruit())))
	  unsorted.putFruit(f);
	}
      else
	delete(unsorted.pickFruit());
      tmp = tmp->next;
    }
}

FruitBox* const * organizeCoconut(Coconut const * const * coconuts_packet)
{

}
