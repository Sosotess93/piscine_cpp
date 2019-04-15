//
// Federation.cpp for ex00 in /home/armita_a/rendu/piscine_cpp_d07m/ex00
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Tue Jan 13 09:33:23 2015 armita_a
// Last update Wed Jan 14 08:41:09 2015 armita_a
//

#include <string>
#include <iostream>
#include "Borg.hh"
#include "Federation.hh"

Borg::Ship::Ship(int frenquency, short repair)
{
  this->_length = 300;
  this->_shield = 100;
  this->_maxWarp = 9;
  this->_repair = repair;
  this->_weaponFrequecy = frenquency;
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

int	Borg::Ship::getShield()
{
  return this->_shield;
}

void	Borg::Ship::setShield(int nb)
{
  this->_shield = nb;
}

int		Borg::Ship::getWeaponFrequency()
{
  return this->_weaponFrequecy;
}

void		Borg::Ship::setWeaponFrequency(int nb)
{
  this->_weaponFrequecy = nb;
}

short		Borg::Ship::getRepair()
{
  return this->_repair;
}

void		Borg::Ship::setRepair(short nb)
{
  this->_repair = nb;
}

void		Borg::Ship::repair()
{
  if (this->_repair == 0)
    std::cout << "Energy cells depleted, shield weakening" << std::endl;
  else
    {
      this->_shield = 100;
      this->_repair -= 1;
      std::cout << "Begin shield re-initialisation... Done. Awaiting further instructions." << std::endl;
    }
}

void	Borg::Ship::fire(Federation::Starfleet::Ship *ship)
{
  ship->setShield(ship->getShield() - this->_weaponFrequecy);
  std::cout << "Firing on target with " << this->_weaponFrequecy  << "GW frequency." << std::endl;
}

void	Borg::Ship::fire(Federation::Ship *ship)
{
  ship->setShield(ship->getShield() - this->_weaponFrequecy);
  std::cout << "Firing on target with " << this->_weaponFrequecy  << "GW frequency." << std::endl;
}
