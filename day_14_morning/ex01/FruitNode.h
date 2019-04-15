/*
** FruitNode.h for ex00 in /home/armita_a/rendu/piscine_cpp_d14m/ex00
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Tue Jan 20 09:21:04 2015 armita_a
** Last update Tue Jan 20 10:48:57 2015 armita_a
*/

#ifndef FRUITNODE_H_
# define FRUITNODE_H_

#include "Fruit.h"

typedef struct FruitNode
{
  Fruit		*data;
  FruitNode	*next;
}		FruitNode;

#endif /* !FRUITNODE_H_ */
