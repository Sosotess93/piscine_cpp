//
// Warrior.cpp for ex01 in /home/armita_a/rendu/piscine_cpp_d09/ex01
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Thu Jan 15 13:28:19 2015 armita_a
// Last update Fri Jan 16 08:51:18 2015 armita_a
//

#include "Character.hh"
#include "Mage.hh"
#include "Priest.hh"
#include "Paladin.hh"

Paladin::Paladin(const std::string &name, int val)
  : Character(name, val, 9, 10, 10, 10, 2),
    Mage(name, val, 9, 10, 10, 10, 2),
    Warrior(name, val, 9, 10, 10, 10, 2),
    Priest(name, val, 9, 10, 10, 10, 2)

{
  //  this->_weaponName = "hammer";
    std::cout << "the light falls on " << name << std::endl;
}

int	Paladin::Intercept()
{
  return Warrior::RangeAttack();
}
