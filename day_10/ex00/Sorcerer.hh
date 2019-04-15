//
// Sorcerer.hh for ex00 in /home/armita_a/rendu/piscine_cpp_d10/ex00
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Fri Jan 16 09:05:23 2015 armita_a
// Last update Fri Jan 16 12:39:58 2015 armita_a
//

#ifndef SORCERER_HH
#define SORCERER_HH

#include <string>
#include "Victim.hh"

class Sorcerer
{
public:
  Sorcerer(std::string const &, std::string const &);
  ~Sorcerer();
  std::string 	getName() const;
  std::string	getTitle() const;
  void		polymorph(Victim const &);
private:
  std::string	_name;
  std::string	_title;
};

std::ostream    &operator<<(std::ostream& os, Sorcerer &sor);

#endif
