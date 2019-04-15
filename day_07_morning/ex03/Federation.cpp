//
// Federation.cpp for ex00 in /home/armita_a/rendu/piscine_cpp_d07m/ex00
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Tue Jan 13 09:33:23 2015 armita_a
// Last update Tue Jan 13 23:52:02 2015 armita_a
//

#include <string>
#include <iostream>
#include "Federation.hh"
#include "Borg.hh"

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

Federation::Starfleet::Ship::Ship(int length, int width, std::string name, short maxWarp, int torpedo)
{
  this->_length = length;
  this->_width = width;
  this->_name = name;
  this->_maxWarp = maxWarp;
  this->_home = EARTH;
  this->_location = this->_home;
  this->_shield = 100;
  this->_photonTorpedo = torpedo;
  std::cout << "The ship USS " << name << " has been finished. It is " << length <<  " m in length and " << width << " m in width." << " It can go to Warp " << maxWarp << "!" << " Weapons are set: " << torpedo  << " torpedoes ready." << std::endl;
}

Federation::Starfleet::Ship::Ship()
{
  this->_length = 289;
  this->_width = 132;
  this->_name = "Entreprise";
  this->_maxWarp = 6;
  this->_home = EARTH;
  this->_location = this->_home;
  this->_shield = 100;
  this->_photonTorpedo = 20;
  std::cout << "The ship USS Entreprise has been finished. It is 289 m in length and 132 m in width. It can go to Warp 6! Weapons are set: 20 torpedoes ready." << std::endl;
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


int	Federation::Starfleet::Ship::getShield()
{
  return this->_shield;
}

int	Federation::Starfleet::Ship::getTorpedo()
{
  return this->_photonTorpedo;
}

void	Federation::Starfleet::Ship::setShield(int nb)
{
  this->_shield = nb;
}

void	Federation::Starfleet::Ship::setTorpedo(int nb )
{
  this->_photonTorpedo = nb;
}

void Federation::Starfleet::Ship::fire(Borg::Ship *bad)
{
  if (this->_photonTorpedo == 0)
    {
      std::cout << this->_name << ": No more torpedo to fire, " << this->_captain->getName() << std::endl;
      return ;
    }
  this->_photonTorpedo -= 1;
  std::cout << this->_name << ": Firing on target. " << this->_photonTorpedo << " torpedoes remaining." << std::endl;
  bad->setShield(bad->getShield() - 50);
}

void	Federation::Starfleet::Ship::fire(int torpedoes, Borg::Ship *bad)
{
  if (this->_photonTorpedo == 0)
    {
      std::cout << this->_name << ": No more torpedo to fire, " << this->_captain->getName() << std::endl;
      return ;
    }
  else if (this->_photonTorpedo < torpedoes)
    {
       std::cout << this->_name << ": No enough torpedoes to fire, " << this->_captain->getName() << std::endl;
      return ;
    }
  this->_photonTorpedo -= torpedoes;
  std::cout << this->_name << ": Firing on target. " << this->_photonTorpedo << " torpedoes remaining." << std::endl;
  bad->setShield(bad->getShield() - (50 * torpedoes));
}

WarpSystem::Core	*Federation::Ship::getCore()
{
  return this->Core;
}

int	Federation::Ship::getShield()
{
  return this->_shield;
}

void	Federation::Ship::setShield(int nb)
{
  this->_shield = nb;
}
