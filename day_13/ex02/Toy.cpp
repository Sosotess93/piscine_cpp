//
// Toy.cpp for ex00 in /home/armita_a/rendu/piscine_cpp_d13/ex00
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Mon Jan 19 09:26:12 2015 armita_a
// Last update Mon Jan 19 15:34:40 2015 armita_a
//

#include <string>
#include "Toy.h"
#include "Picture.h"

Toy::Toy() :
  _name("toy"),
  _type(BASIC_TOY),
  _pic(new Picture())
{
}

Toy::Toy(ToyType type, std::string const&name, std::string const& path) :
  _name(name),
  _type(type),
  _pic(new Picture(path))
{
}


Toy::Toy(const Toy &toy) :
  _name(toy._name),
  _type(toy._type),
  _pic(toy._pic)
{
}

Toy::~Toy()
{
}


std::string	Toy::getName() const
{
  return _name;
}

std::string	Toy::getAscii() const
{
  return _pic->data;
}

Toy::ToyType		Toy::getType() const
{
  return _type;
}

void		Toy::setName(std::string const& name)
{
  _name = name;
}

bool		Toy::setAscii(std::string const&str)
{
  return _pic->getPictureFromFile(str);
}


Toy	&Toy::operator=(Toy const &toy)
{
  _name = toy.getName();
  _type = toy.getType();
  _pic->data =  toy.getAscii();
  return *this;
}
