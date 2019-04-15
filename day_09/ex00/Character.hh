//
// Character.hh for ex00 in /home/armita_a/rendu/piscine_cpp_d09/ex00
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Thu Jan 15 11:12:33 2015 armita_a
// Last update Thu Jan 15 12:31:42 2015 armita_a
//

#ifndef CHARACTER_HH
#define CHARACTER_HH

#include <iostream>
#include <string>

class Character
{
 public:
  Character(const std::string &, int);
  const std::string &getName() const;
  int	getLvl() const;
  int	getPv() const;
  int	getPower() const;
  int	CloseAttack();
  int	RangeAttack();
  void	Heal();
  void	RestorePower();
  void	TakeDamage(int _damage);
    enum	range
    {
      CLOSE,
      RANGE
    };
range		Range;
private:
  const std::string	*_name;
  int		_lvl;
  int		_pv;
  int		_power;
  int		_stamina;
  int		_spirit;
  int		_agility;
  int		_strength;
};

#endif /*CHARACTER_HH */
