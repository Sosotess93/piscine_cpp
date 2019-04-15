//
// PowerFist.cpp for ex01 in /home/armita_a/rendu/piscine_cpp_d10/ex01
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Fri Jan 16 14:40:58 2015 armita_a
// Last update Fri Jan 16 14:52:17 2015 armita_a
//

#include <iostream>
#include "AWeapon.hh"
#include "PowerFist.hh"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
}

void	PowerFist::attack() const
{
  std::cout << "* pschhh... SBAM! *" << std::endl;
}
