//
// AEnemy.hh for ex01 in /home/armita_a/rendu/piscine_cpp_d10/ex01
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Fri Jan 16 14:56:21 2015 armita_a
// Last update Fri Jan 16 16:07:12 2015 armita_a
//

#ifndef AENEMY_HH
#define AENEMY_HH

#include <string>

class AEnemy
{
public:
  AEnemy(int hp, std::string const & type);
  virtual ~AEnemy();
  std::string const	getType() const;
  int		getHP() const;
  virtual void	takeDamage(int dam);
private:
std::string const	_type;
  int		_damage;
  int		_hp;
};

#endif
