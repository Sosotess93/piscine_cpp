//
// Victim.cpp for ex00 in /home/armita_a/rendu/piscine_cpp_d10/ex00
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Fri Jan 16 09:06:06 2015 armita_a
// Last update Fri Jan 16 13:07:24 2015 armita_a
//

#include "Victim.hh"

Victim::Victim(std::string const &name) : _name(std::string(name))
{
  std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
}

Victim::~Victim()
{
  std::cout << "Victim " << _name << " just died for no apparent reason !" << std::endl;
}

std::string	Victim::getName() const
{
  return this->_name;
}

void		Victim::getPolymorphed() const
{
  std::cout << _name << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream    &operator<<(std::ostream& os, Victim &vic)
{
  os << "I'm " << vic.getName() << " and i like otters !" << std::endl;
  return os;
}
