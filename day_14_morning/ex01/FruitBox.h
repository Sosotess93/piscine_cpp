/*
** FruitBox.h for ex00 in /home/armita_a/rendu/piscine_cpp_d14m/ex00
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Tue Jan 20 09:39:30 2015 armita_a
** Last update Tue Jan 20 11:06:14 2015 armita_a
*/

#ifndef FRUITBOX_H_
# define FRUITBOX_H_

#include "FruitNode.h"

class FruitBox
{
 public:
  FruitBox(int size);
  int		nbFruits() const;
  bool		putFruit(Fruit* f);
  Fruit*	pickFruit();
  FruitNode*	head() const;
 private:
  int		_nbmax;
  FruitNode	*_head;
};


#endif /* !FRUITBOX_H_ */
