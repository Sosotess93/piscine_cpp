//
// Warrior.cpp for ex01 in /home/armita_a/rendu/piscine_cpp_d09/ex01
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Thu Jan 15 13:28:19 2015 armita_a
// Last update Fri Jan 16 09:47:51 2015 armita_a
//

#include "Character.hh"
#include "Mage.hh"
#include "Priest.hh"

Priest::Priest(const std::string &name, int val)
  : Character(name, val, 9, 10, 10, 10, 2),
   Mage(name, val, 4, 4, 42, 21, 2)
{
  this->_race = "Gnome";
  std::cout << name << " enters in the order" << std::endl;
}

Priest::Priest(const std::string &name, int val, int strength, int  stamina, int intelligence,
	       int spirit, int agility) :  Character(name, val, strength, stamina, intelligence, spirit, agility),
					   Mage(name, val, strength, stamina, intelligence, spirit, agility)
{
  std::cout << name << " enters in the order" << std::endl;
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

int	Priest::CloseAttack()
{
  if (CheckEnergy(10, this) == false)
    return 0;
  _power -= 10;
  std::cout << *(this->_name) << " uses a spirit explosion" << std::endl;
  return 10 + _spirit;
}

void    Priest::Heal()
{
  if (CheckEnergy(10, this) == false)
    return ;
  _power -= 10;
  _pv += 70;
  if (_pv > 100)
    _pv = 100;
  std::cout << *(this->_name) << " casts a little heal spell" << std::endl;    _power = 100;
}
