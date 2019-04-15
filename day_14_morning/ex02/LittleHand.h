/*
** LittleHand.h for ex01 in /home/armita_a/rendu/piscine_cpp_d14m/ex01
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Tue Jan 20 13:33:43 2015 armita_a
** Last update Tue Jan 20 14:57:00 2015 armita_a
*/

#ifndef LITTLEHAND_H_
# define LITTLEHAND_H_

#include "FruitBox.h"
#include "Coconut.h"

class LittleHand
{
 public:
  static  void	sortFruitBox(FruitBox &, FruitBox &, FruitBox &, FruitBox &);
  FruitBox* const * organizeCoconut(Coconut const * const * coconuts_packet);
};

#endif /* !LITTLEHAND_H_ */
