//
// Peon.hh for ex00 in /home/armita_a/rendu/piscine_cpp_d10/ex00
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Fri Jan 16 09:06:14 2015 armita_a
// Last update Fri Jan 16 13:11:58 2015 armita_a
//

#ifndef PEON_HH
#define PEON_HH

#include "Victim.hh"

class Peon : public Victim
{
public:
  Peon(std::string const &);
  ~Peon();
  virtual void	getPolymorphed() const;
};

std::ostream    &operator<<(std::ostream& os, Victim &vic);

#endif
