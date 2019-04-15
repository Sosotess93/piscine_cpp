//
// Banana.cpp for ex00 in /home/armita_a/rendu/piscine_cpp_d14m/ex00
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Tue Jan 20 09:05:35 2015 armita_a
// Last update Tue Jan 20 09:38:09 2015 armita_a
//

#include "Fruit.h"
#include "Banana.h"

Banana::Banana() : Fruit(5)
{
}

Banana::~Banana() {}

std::string	Banana::getName() const
{
  return "banana";
}
