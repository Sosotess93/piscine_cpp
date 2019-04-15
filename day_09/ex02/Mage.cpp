//
// Warrior.cpp for ex01 in /home/armita_a/rendu/piscine_cpp_d09/ex01
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Thu Jan 15 13:28:19 2015 armita_a
// Last update Fri Jan 16 09:45:45 2015 armita_a
//

#include "Character.hh"
#include "Mage.hh"

Mage::Mage(const std::string &name, int val)
  : Character(name, val, 6, 6, 12, 11, 7)
{
  this->_race = "Gnome";
  std::cout << name << " teleported" << std::endl;
}

Mage::Mage(const std::string &newName, int level, int strength, int  stamina, int intelligence,
	   int spirit, int agility) :  Character(newName, level, strength, stamina, intelligence, spirit, agility)
{
  std::cout << newName << " teleported" << std::endl;
}
static	bool CheckEnergy(int nb, Mage *charac)
{
  if(charac->getPower() < nb)
    {
      std::cout << charac->getName() << " out of power" << std::endl;
      return false;
    }
  return true;
}

int	Mage::CloseAttack()
{
  if (CheckEnergy(10, this) == false)
    return 0;
  _power -= 10;
  std::cout << *(this->_name) << " blinks" << std::endl;
  this->Range = Character::RANGE;
  return 0;
}

int	Mage::RangeAttack()
{
  if (CheckEnergy(25, this) == false)
    return 0;
  _power -= 25;
  std::cout << *(this->_name) << " launches a fire ball" << std::endl;
  return 20 + _spirit;
}

void    Mage::RestorePower()
{
  _power += (50 + _intelligence);
  if (_power > 100)
    _power = 100;
  std::cout <<  *(this->_name) << " takes a mana potion" << std::endl;
}
