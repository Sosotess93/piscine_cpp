//
// Warrior.hh for ex01 in /home/armita_a/rendu/piscine_cpp_d09/ex01
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Thu Jan 15 13:28:26 2015 armita_a
// Last update Thu Jan 15 15:41:55 2015 armita_a
//

#ifndef WARRIOR_HH
#define WARRIOR_HH

#include "Character.hh"

class Warrior : public Character
{
public:
  Warrior(const std::string &, int);
  int	CloseAttack();
  int	RangeAttack();
private:
  std::string	_weaponName;
};

#endif
