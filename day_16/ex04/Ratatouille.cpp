//
// Ratatouille.cpp for ex04 in /home/armita_a/rendu/piscine_cpp_d16/ex04
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Thu Jan 22 17:32:56 2015 armita_a
// Last update Thu Jan 22 17:56:02 2015 armita_a
//

#include <sstream>
#include "Ratatouille.h"

Ratatouille::Ratatouille() {}

Ratatouille::Ratatouille(Ratatouille const &o)
{
  _name.str("");
  _name << o.getName();
}

Ratatouille::~Ratatouille() {}

std::string	Ratatouille::getName() const
{
  return _name.str();
}

Ratatouille	&Ratatouille::operator=(const Ratatouille &o)
{
  _name.str("");
  _name << o.getName();
  return *this;
}

Ratatouille	&Ratatouille::addVegetable(unsigned char c)
{
   _name << c;
  return *this;
}

Ratatouille	&Ratatouille::addCondiment(unsigned int i)
{
  _name << i;
  return *this;
}

Ratatouille	&Ratatouille::addSpice(double d)
{
   _name << d;
  return *this;
}
Ratatouille	&Ratatouille::addSauce(const std::string &str)
{
  _name << str;
  return *this;
}

std::string	Ratatouille::kooc(void)
{
  return std::string(_name.str());
}
