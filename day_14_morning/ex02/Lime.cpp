//
// Lime.cpp for ex01 in /home/armita_a/rendu/piscine_cpp_d14m/ex01
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Tue Jan 20 13:21:18 2015 armita_a
// Last update Tue Jan 20 13:24:26 2015 armita_a
//

#include <string>
#include "Fruit.h"
#include "Lemon.h"
#include "Lime.h"

Lime::Lime() : Lemon(2)
{
}

Lime::~Lime() {}

std::string	Lime::getName() const
{
  return "lime";
}
