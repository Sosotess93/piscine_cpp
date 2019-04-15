//
// Warrior.hh for ex01 in /home/armita_a/rendu/piscine_cpp_d09/ex01
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Thu Jan 15 13:28:26 2015 armita_a
// Last update Thu Jan 15 17:55:47 2015 armita_a
//

#ifndef Paladin_HH
#define Paladin_HH

#include "Warrior.hh"
#include "Priest.hh"

class Paladin : public Warrior,  public Priest
{
public:
  Paladin(const std::string &, int);
  int Intercept();
  using		Warrior::CloseAttack;
  using		Warrior::RestorePower;
  using		Priest::Heal;
  using		Priest::RangeAttack;
};

#endif
