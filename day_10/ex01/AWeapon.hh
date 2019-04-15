//
// AWeapon.hh for ex01 in /home/armita_a/rendu/piscine_cpp_d10/ex01
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Fri Jan 16 13:18:47 2015 armita_a
// Last update Fri Jan 16 14:51:31 2015 armita_a
//

#ifndef AWEAPON_HH
#define AWEAPON_HH

#include <string>

class AWeapon
{
 public:
  AWeapon(std::string const & name, int apcost, int damage);
  virtual  ~AWeapon();
  int			getAPCost() const;
  int			getDamage() const;
  virtual void		attack() const = 0;
  std::string		getName() const;
 private:
  std::string	_name;
  int		_apcost;
  int		_damage;
};

#endif
