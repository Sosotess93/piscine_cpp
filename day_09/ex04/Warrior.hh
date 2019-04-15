//
// Warrior.hh for ex01 in /home/armita_a/rendu/piscine_cpp_d09/ex01
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Thu Jan 15 13:28:26 2015 armita_a
// Last update Thu Jan 15 17:20:10 2015 armita_a
//

#ifndef WARRIOR_HH
#define WARRIOR_HH

#include "Character.hh"

class Warrior : public virtual Character
{
public:
  Warrior(const std::string &, int);
  Warrior(const std::string &, int, int, int, int,  int, int);
  int	CloseAttack();
  int	RangeAttack();
protected:
  std::string	_weaponName;
};

#endif
