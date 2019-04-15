//
// PlasmaRifle.cpp for ex01 in /home/armita_a/rendu/piscine_cpp_d10/ex01
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Fri Jan 16 14:34:46 2015 armita_a
// Last update Fri Jan 16 14:52:54 2015 armita_a
//

#include <iostream>
#include "AWeapon.hh"
#include "PlasmaRifle.hh"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
}

void	PlasmaRifle::attack() const
{
  std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
