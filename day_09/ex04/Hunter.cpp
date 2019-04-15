//
// Warrior.cpp for ex01 in /home/armita_a/rendu/piscine_cpp_d09/ex01
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Thu Jan 15 13:28:19 2015 armita_a
// Last update Fri Jan 16 09:47:10 2015 armita_a
//

#include "Warrior.hh"
#include "Hunter.hh"

Hunter::Hunter(const std::string &name, int val)
  : Character(name, val, 9, 9, 5, 6, 24),
    Warrior(name, val, 9, 9, 5, 6, 24)
{
  this->_race = "Elf";
  this->_weaponName = "sword";
  std::cout << name << " is born from a tree" << std::endl;
}

static	bool CheckEnergy(int nb, Character *charac)
{
  if(charac->getPower() < nb)
    {
      std::cout << charac->getName() << " out of power" << std::endl;
      return false;
    }
  return true;
}

int		Hunter::RangeAttack()
{
  if (CheckEnergy(25, this) == false)
    return 0;
  _power -= 25;
  std::cout << this->getName() << " uses his bow" << std::endl;
  return 5 + _agility;
}

void		Hunter::RestorePower()
{
  this->_power = 100;
  std::cout << this->getName() << " meditates" << std::endl;
}
