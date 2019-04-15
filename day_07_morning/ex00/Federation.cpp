//
// Federation.cpp for ex00 in /home/armita_a/rendu/piscine_cpp_d07m/ex00
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Tue Jan 13 09:33:23 2015 armita_a
// Last update Wed Jan 14 08:38:05 2015 armita_a
//

#include <string>
#include <iostream>
#include "Federation.hh"

Federation::Starfleet::Ship::Ship(int length, int width, std::string name, short maxWarp)
{
  this->_length = length;
  this->_width = width;
  this->_name = name;
  this->_maxWarp = maxWarp;
  std::cout << "The ship USS " << name << " has been finished. It is " << length <<  " m in length and "
	    << width << " m in width." << std::endl << "It can go to Warp " << maxWarp << "!" << std::endl;
}


void	Federation::Starfleet::Ship::setupCore(WarpSystem::Core *core)
{
  this->Core = core;
  std::cout << "USS " << this->_name << ": The core is set." << std::endl;
}

void	Federation::Starfleet::Ship::checkCore()
{
  std::cout << "USS " << this->_name << ": The core is ";
   if (this->Core->checkReactor()->isStable() == true)
    std::cout << "stable";
  else
    std::cout << "unstable";
  std::cout << " at the time." << std::endl;
}

Federation::Ship::Ship(int length, int width, std::string name)
{
  this->_length = length;
  this->_width = width;
  this->_name = name;
  this->_maxWarp = 1;
  std::cout << "The independant ship " << name << " just finished its construction. It is " << length
	    << " m in length and " << width << " m in width." << std::endl;
}

void	Federation::Ship::setupCore(WarpSystem::Core *core)
{
  this->Core = core;
  std::cout << this->_name << ": The core is set." << std::endl;
}

void	Federation::Ship::checkCore()
{
  std::cout << this->_name << ": The core is ";
  if (this->Core->checkReactor()->isStable() == true)
    std::cout << "stable";
  else
    std::cout << "unstable";
  std::cout << " at the time." << std::endl;
}
