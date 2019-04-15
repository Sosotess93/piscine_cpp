//
// Character.cpp for ex01 in /home/armita_a/rendu/piscine_cpp_d10/ex01
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Fri Jan 16 15:30:46 2015 armita_a
// Last update Fri Jan 16 16:06:25 2015 armita_a
//

#include <iostream>
#include "AWeapon.hh"
#include "AEnemy.hh"
#include "Character.hh"

Character::Character(std::string const & name) : _name(name)
{
  _ap = 40;
  _weapon = NULL;
}

Character::~Character()
{
}

void		Character::recoverAP()
{
  _ap += 10;
  if (_ap > 40)
    _ap = 40;
}

void		Character::equip(AWeapon* wep)
{
  _weapon = wep;
}

void		Character::attack(AEnemy* ene)
{
  if (!_weapon)
    return ;
  std::cout << _name << " attacks " << ene->getType() << " with a " << _weapon->getName() << std::endl;
  _weapon->attack();
  _ap -= _weapon->getAPCost();
  ene->takeDamage(_weapon->getDamage());
  if (ene->getHP() <= 0)
    delete(ene);
}

std::string	Character::getName() const
{
  return _name;
}

int		Character::getAP() const
{
  return _ap;
}

AWeapon		*Character::getWeapon() const
{
  return _weapon;
}

std::ostream    &operator<<(std::ostream& os, Character &carac)
{
  os << carac.getName() <<  " has " << carac.getAP() << " AP and ";
  if (carac.getWeapon())
    os << "wields a " << carac.getWeapon()->getName();
  else
    os << "is unarmed";
  os << std::endl;
  return os;
}
