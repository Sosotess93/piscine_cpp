//
// Toy.cpp for ex00 in /home/armita_a/rendu/piscine_cpp_d13/ex00
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Mon Jan 19 09:26:12 2015 armita_a
// Last update Tue Jan 20 08:06:19 2015 armita_a
//

#include <iostream>
#include <string>
#include "Toy.h"
#include "Picture.h"

Toy::Toy() :
  _name("toy"),
  _type(BASIC_TOY),
  _pic(new Picture()),
  _error()
{
}

Toy::Toy(ToyType type, std::string const&name, std::string const& path) :
  _name(name),
  _type(type),
  _pic(new Picture(path)),
  _error()
{
}


Toy::Toy(const Toy &toy) :
  _name(toy._name),
  _type(toy._type),
  _pic(toy._pic),
  _error()
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

Toy::ToyType	Toy::getType() const
{
  return _type;
}

void		Toy::setName(std::string const& name)
{
  _name = name;
}

bool		Toy::setAscii(std::string const&str)
{
  if (_pic->getPictureFromFile(str))
    return true;
  _error.type = Error::PICTURE;
  return false;
}


Toy		&Toy::operator=(Toy const &toy)
{
  _name = toy.getName();
  _type = toy.getType();
  _pic->data =  toy.getAscii();
  return *this;
}

void		Toy::speak(std::string const &str)
{
  std::cout << this->_name << " \"" << str << "\"" << std::endl;
}

bool		Toy::speak_es(std::string const &str)
{
  (void)str;
  _error.type = Error::SPEAK;
  return false;
}

Toy		&Toy::operator<<(std::string const &str)
{
  _pic->data =  str;
  return *this;
}

std::ostream	&operator<<(std::ostream &os, Toy const &toy)
{
  os << toy.getName() << std::endl << toy.getAscii() <<std::endl;
  return os;
}


Toy::Error::Error() :
  type(UNKNOWN)
{
}

std::string	Toy::Error::what() const
{
  if (type == PICTURE)
    return "bad new illustration";
  else if (type == SPEAK)
    return "wrong mode";
  return "";
}
std::string	Toy::Error::where() const
{
  if (type == PICTURE)
    return "setAscii";
  else if (type == SPEAK)
    return "speak_es";
  return "";
}

Toy::Error	Toy::getLastError()
{
  return _error;
}
