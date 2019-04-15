//
// SuperMutant.cpp for ex01 in /home/armita_a/rendu/piscine_cpp_d10/ex01
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Fri Jan 16 15:13:04 2015 armita_a
// Last update Fri Jan 16 15:25:12 2015 armita_a
//

#include <iostream>
#include "AEnemy.hh"
#include "SuperMutant.hh"

SuperMutant::SuperMutant() : AEnemy(170, "Super Mutant")
{
  std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant()
{
   std::cout << "Aaargh ..." << std::endl;
}

void    SuperMutant::takeDamage(int dmg)
{
  AEnemy::takeDamage(dmg - 3);
}
