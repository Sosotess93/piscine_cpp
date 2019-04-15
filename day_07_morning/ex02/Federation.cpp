//
// Federation.cpp for ex00 in /home/armita_a/rendu/piscine_cpp_d07m/ex00
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Tue Jan 13 09:33:23 2015 armita_a
// Last update Tue Jan 13 23:35:12 2015 armita_a
//

#include <string>
#include <iostream>
#include "Federation.hh"


Federation::Starfleet::Captain::Captain(std::string name)
{
  this->_name = name;
}


std::string	Federation::Starfleet::Captain::getName()
{
  return this->_name;
}

int	Federation::Starfleet::Captain::getAge()
{
  return this->_age;
}

void	Federation::Starfleet::Captain::setAge(int age)
{
  this->_age = age;
}

Federation::Starfleet::Ensign::Ensign(std::string name)
{
  this->_name = name;
  std::cout << "Ensign " << name << ", awaiting orders." << std::endl;
}

void	Federation::Starfleet::Ship::promote(Federation::Starfleet::Captain *cap)
{
  this->_captain = cap;
  std::cout << cap->getName() << ": I'm glad to be the captain of the USS " << this->_name << "." << std::endl;
}

Federation::Starfleet::Ship::Ship(int length, int width, std::string name, short maxWarp)
{
  this->_length = length;
  this->_width = width;
  this->_name = name;
  this->_maxWarp = maxWarp;
  this->_home = EARTH;
  this->_location = this->_home;
  std::cout << "The ship USS " << name << " has been finished. It is " << length <<  " m in length and " << width << " m in width." << std::endl << "It can go to Warp " << maxWarp << "!" << std::endl;
}

void	Federation::Starfleet::Ship::setupCore(WarpSystem::Core *core)
{
  this->Core = core;
  std::cout << "USS " << this->_name << ": The core is set." << std::endl;
}

bool	Federation::Starfleet::Ship::move(int wrap, Destination d)
{
  if (wrap > this->_maxWarp || d == this->_location || this->Core->checkReactor()->isStable() == false)
    return false;
  this->_location = d;
  return true;
}

bool	Federation::Starfleet::Ship::move(int wrap)
{
  if (wrap > this->_maxWarp || this->Core->checkReactor()->isStable() == false)
      return false;
    this->_location = this->_home;
    return true;
}

bool	Federation::Starfleet::Ship::move(Destination d)
{
  if (d == this->_location || this->Core->checkReactor()->isStable() == false)
    return false;
  this->_location = d;
  return true;
}

bool	Federation::Starfleet::Ship::move()
{
  if (this->Core->checkReactor()->isStable() == false)
    return false;
  this->_location = this->_home;
  return true;
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
  this->_home = VULCAN;
  this->_location = this->_home;
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

bool	Federation::Ship::move(int wrap, Destination d)
{
  if (wrap > this->_maxWarp || d == this->_location || this->Core->checkReactor()->isStable() == false)
    return false;
  this->_location = d;
  return true;
}

bool	Federation::Ship::move(int wrap)
{
  if (wrap > this->_maxWarp || this->Core->checkReactor()->isStable() == false)
      return false;
    this->_location = this->_home;
    return true;
}

bool	Federation::Ship::move(Destination d)
{
  if (d == this->_location || this->Core->checkReactor()->isStable() == false)
    return false;
  this->_location = d;
  return true;
}

bool	Federation::Ship::move()
{
  if (this->Core->checkReactor()->isStable() == false)
    return false;
  this->_location = this->_home;
  return true;
}
