//
// PlasmaRifle.hh for ex01 in /home/armita_a/rendu/piscine_cpp_d10/ex01
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Fri Jan 16 14:34:57 2015 armita_a
// Last update Fri Jan 16 14:52:46 2015 armita_a
//

#ifndef PLASMARIFLE_HH
#define PLASMARIFLE_HH

#include "AWeapon.hh"

class PlasmaRifle : public AWeapon
{
 public:
  PlasmaRifle();
  void		attack() const;
};

#endif
