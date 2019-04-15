//
// Federation.cpp for ex00 in /home/armita_a/rendu/piscine_cpp_d07m/ex00
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Tue Jan 13 09:33:23 2015 armita_a
// Last update Wed Jan 14 08:40:53 2015 armita_a
//

#include <string>
#include <iostream>
#include "Borg.hh"

Borg::Ship::Ship()
{
  this->_length = 300;
  this->_maxWarp = 9;
  this->_home = UNICOMPLEX;
  this->_location = this->_home;
  std::cout << "We are the Borgs. Lower your shields and surrender yourselves unconditionally." << std::endl << "Your biological characteristics and technologies will be assimilated." << std::endl << "Resistance is futile." <<std::endl;
}

void	Borg::Ship::setupCore(WarpSystem::Core *core)
{
  this->Core = core;
}

void	Borg::Ship::checkCore()
{
   if (this->Core->checkReactor()->isStable() == true)
     std::cout << "Everything is in order." << std::endl;
  else
    std::cout << "Critical failure imminent" << std::endl;
}

bool	Borg::Ship::move(int wrap, Destination d)
{
  if (wrap > this->_maxWarp || d == this->_location || this->Core->checkReactor()->isStable() == false)
    return false;
  this->_location = d;
  return true;
}

bool	Borg::Ship::move(int wrap)
{
  if (wrap > this->_maxWarp || this->Core->checkReactor()->isStable() == false)
      return false;
    this->_location = this->_home;
    return true;
}

bool	Borg::Ship::move(Destination d)
{
  if (d == this->_location || this->Core->checkReactor()->isStable() == false)
    return false;
  this->_location = d;
  return true;
}

bool	Borg::Ship::move()
{
  if (this->Core->checkReactor()->isStable() == false)
    return false;
  this->_location = this->_home;
  return true;
}
