//
// Character.hh for ex01 in /home/armita_a/rendu/piscine_cpp_d10/ex01
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Fri Jan 16 15:28:22 2015 armita_a
// Last update Fri Jan 16 15:48:57 2015 armita_a
//

#ifndef CHARACTER_HH
#define CHARACTER_HH

#include <iostream>
#include "AWeapon.hh"
#include "AEnemy.hh"

class Character
{
public:
  Character(std::string const & name);
  ~Character();
  void	recoverAP();
  void	equip(AWeapon*);
  void	attack(AEnemy*);
  std::string	getName() const;
  AWeapon	*getWeapon() const;
  int		getAP() const;
private:
  std::string const	_name;
  int		_ap;
  AWeapon	*_weapon;
};

std::ostream    &operator<<(std::ostream& os, Character &carac);

#endif
