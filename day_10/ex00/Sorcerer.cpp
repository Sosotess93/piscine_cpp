//
// Sorcerer.cpp for ex00 in /home/armita_a/rendu/piscine_cpp_d10/ex00
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Fri Jan 16 09:05:36 2015 armita_a
// Last update Fri Jan 16 13:07:33 2015 armita_a
//

#include <iostream>
#include "Sorcerer.hh"
#include "Victim.hh"

Sorcerer::Sorcerer(std::string const &name, std::string const &title) :
  _name(std::string(name)),
  _title(std::string(title))
{
  std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer()
{
  std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same !" << std::endl;
}

std::string	Sorcerer::getName() const
{
  return this->_name;
}

std::string	Sorcerer::getTitle() const
{
  return this->_title;
}

void		Sorcerer::polymorph(Victim const &vic)
{
  vic.getPolymorphed();
}

std::ostream    &operator<<(std::ostream& os, Sorcerer &sor)
{
  os << "I am " << sor.getName() << ", " << sor.getTitle() << ", and I like ponies !" << std::endl;
  return os;
}
