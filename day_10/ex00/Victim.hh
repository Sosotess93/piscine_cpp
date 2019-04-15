//
// Victim.hh for ex00 in /home/armita_a/rendu/piscine_cpp_d10/ex00
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Fri Jan 16 09:05:51 2015 armita_a
// Last update Fri Jan 16 13:13:23 2015 armita_a
//

#ifndef VICTIM_HH
#define VICTIM_HH

#include <iostream>

class Victim
{
public:
  Victim(std::string const &);
  ~Victim();
  std::string 	getName() const;
  virtual void		getPolymorphed() const;
private:
  std::string	_name;
};

std::ostream    &operator<<(std::ostream& os, Victim &vic);

#endif
