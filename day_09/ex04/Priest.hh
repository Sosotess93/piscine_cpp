//
// Warrior.hh for ex01 in /home/armita_a/rendu/piscine_cpp_d09/ex01
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Thu Jan 15 13:28:26 2015 armita_a
// Last update Thu Jan 15 17:20:18 2015 armita_a
//

#ifndef Priest_HH
#define Priest_HH

#include "Character.hh"
#include "Mage.hh"

class Priest : public virtual Mage
{
public:
  Priest(const std::string &, int);
  Priest(const std::string &, int, int, int, int,  int, int);
  int	CloseAttack();
  void	Heal();
};

#endif
