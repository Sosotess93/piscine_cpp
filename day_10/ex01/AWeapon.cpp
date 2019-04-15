//
// AWeapon.cpp for ex01 in /home/armita_a/rendu/piscine_cpp_d10/ex01
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Fri Jan 16 13:18:38 2015 armita_a
// Last update Fri Jan 16 16:01:32 2015 armita_a
//

#include "AWeapon.hh"

AWeapon:: AWeapon(std::string const & name, int apcost, int damage)
{
  _name =  name;
  _apcost = apcost;
  _damage = damage;
}

AWeapon::~AWeapon()
{
}

int	AWeapon::getAPCost() const
{
  return _apcost;
}

int	AWeapon::getDamage() const
{
  return _damage;
}

std::string 	AWeapon::getName() const
{
  return _name;
}
