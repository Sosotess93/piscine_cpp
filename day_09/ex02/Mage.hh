//
// Warrior.hh for ex01 in /home/armita_a/rendu/piscine_cpp_d09/ex01
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Thu Jan 15 13:28:26 2015 armita_a
// Last update Thu Jan 15 16:15:56 2015 armita_a
//

#ifndef Mage_HH
#define Mage_HH

#include "Character.hh"

class Mage : public Character
{
public:
  Mage(const std::string &, int);
  Mage(const std::string &, int , int, int, int , int,  int);
  int	CloseAttack();
  int	RangeAttack();
  void	RestorePower();
private:
  std::string	_weaponName;
};

#endif
