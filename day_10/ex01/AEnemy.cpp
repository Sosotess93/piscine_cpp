//
// AEnemy.cpp for ex01 in /home/armita_a/rendu/piscine_cpp_d10/ex01
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Fri Jan 16 14:59:44 2015 armita_a
// Last update Fri Jan 16 21:22:29 2015 armita_a
//

#include <string>
#include "AEnemy.hh"

AEnemy::AEnemy(int hp, std::string const & type) :
  _type(type),
  _hp(hp)
{
}

AEnemy::~AEnemy()
{
}

std::string const	AEnemy::getType() const
{
  return _type;
}

int		AEnemy::getHP() const
{
  return _hp;
}

void		AEnemy::takeDamage(int dam)
{
  if (dam < 0)
    return ;
  _hp -= dam;
}
