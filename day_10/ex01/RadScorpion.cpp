//
// RadScorpion.cpp for ex01 in /home/armita_a/rendu/piscine_cpp_d10/ex01
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Fri Jan 16 15:21:53 2015 armita_a
// Last update Fri Jan 16 16:07:49 2015 armita_a
//

#include <iostream>
#include "AEnemy.hh"
#include "RadScorpion.hh"

RadScorpion::RadScorpion() : AEnemy(80, "RadScorpion")
{
  std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
   std::cout << "* SPROTCH *" << std::endl;
}
