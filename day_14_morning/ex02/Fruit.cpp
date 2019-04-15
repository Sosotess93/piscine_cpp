//
// Fruit.cpp for ex00 in /home/armita_a/rendu/piscine_cpp_d14m/ex00
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Tue Jan 20 09:19:56 2015 armita_a
// Last update Tue Jan 20 09:38:41 2015 armita_a
//

#include "Fruit.h"

Fruit::Fruit()
{}

Fruit::Fruit(int val)
{
  _vitamins = val;
}

Fruit::~Fruit()
{}

int	Fruit::getVitamins()
{
  return _vitamins;
}
