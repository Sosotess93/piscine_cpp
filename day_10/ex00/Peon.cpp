//
// Peon.cpp for ex00 in /home/armita_a/rendu/piscine_cpp_d10/ex00
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Fri Jan 16 09:06:10 2015 armita_a
// Last update Fri Jan 16 13:02:41 2015 armita_a
//

#include "Victim.hh"
#include "Peon.hh"

Peon::Peon(std::string const &name) : Victim(name)
{
  std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
  std::cout << "Bleuark..." << std::endl;
}

void		Peon::getPolymorphed() const
{
  std::cout << this->getName() << " has been turned into a pink pony !" << std::endl;
}
