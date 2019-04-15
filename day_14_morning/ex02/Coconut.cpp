//
// Coconut.cpp for ex02 in /home/armita_a/rendu/piscine_cpp_d14m/ex02
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Tue Jan 20 14:40:30 2015 armita_a
// Last update Tue Jan 20 14:42:36 2015 armita_a
//

#include "Fruit.h"
#include "Coconut.h"

Coconut::Coconut() : Fruit(15)
{
}

Coconut::~Coconut() {}

std::string	Coconut::getName() const
{
  return "coconut";
}
