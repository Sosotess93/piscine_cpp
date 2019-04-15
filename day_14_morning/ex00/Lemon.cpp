//
// Lemon.cpp for ex00 in /home/armita_a/rendu/piscine_cpp_d14m/ex00
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Tue Jan 20 09:13:25 2015 armita_a
// Last update Tue Jan 20 09:38:46 2015 armita_a
//

#include <string>
#include "Fruit.h"
#include "Lemon.h"

Lemon::Lemon() : Fruit(3)
{
}

Lemon::~Lemon() {}

std::string	Lemon::getName() const
{
  return "lemon";
}
