//
// Warrior.hh for ex01 in /home/armita_a/rendu/piscine_cpp_d09/ex01
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Thu Jan 15 13:28:26 2015 armita_a
// Last update Sun May 10 22:51:51 2015 armita_a
//

#ifndef HUNTER_HH
#define HUNTER_HH

#include "Warrior.hh"

class Hunter : protected Warrior, public virtual Character
{
public:
  Hunter(const std::string &, int);
  int	RangeAttack();
  void	RestorePower();
};

#endif
