//
// Warrior.cpp for ex01 in /home/armita_a/rendu/piscine_cpp_d09/ex01
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Thu Jan 15 13:28:19 2015 armita_a
// Last update Fri Jan 16 09:46:17 2015 armita_a
//

#include "Character.hh"
#include "Warrior.hh"

Warrior::Warrior(const std::string &name, int val)
  : Character(name, val, 12, 12, 6, 5, 7)
{
  this->_lvl = val;
  this->_race = "Dwarf";
  this->_weaponName = "hammer";
  std::cout << "I'm " << name << " KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG" << std::endl;
}

static	bool CheckEnergy(int nb, Warrior *charac)
{
  if(charac->getPower() < nb)
    {
      std::cout << charac->getName() << " out of power" << std::endl;
      return false;
    }
  return true;
}

int	Warrior::CloseAttack()
{
  if (CheckEnergy(30, this) == false)
    return 0;
  _power -= 30;
  std::cout << *(this->_name) << " strikes with his " << this->_weaponName  << std::endl;
  return 20 + _strength;
}

int	Warrior::RangeAttack()
{
  if (CheckEnergy(10, this) == false )
    return 0;
  _power -= 10;
  std::cout << *(this->_name) << " intercepts" << std::endl;
  this->Range = Character::CLOSE;
  return 0;
}
