//
// SuperMutant.hh for ex01 in /home/armita_a/rendu/piscine_cpp_d10/ex01
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Fri Jan 16 15:12:31 2015 armita_a
// Last update Fri Jan 16 15:25:47 2015 armita_a
//

#ifndef SUPERMUTANT_HH
#define SUPERMUTANT_HH

#include <string>
#include "AEnemy.hh"

class SuperMutant : public AEnemy
{
public:
  SuperMutant();
  ~SuperMutant();
    void	takeDamage(int dam);
private:
};


#endif
