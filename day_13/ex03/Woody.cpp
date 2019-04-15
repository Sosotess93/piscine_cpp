//
// Woody.cpp for ex02 in /home/armita_a/rendu/piscine_cpp_d13/ex02
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Mon Jan 19 12:27:24 2015 armita_a
// Last update Mon Jan 19 13:56:23 2015 armita_a
//

#include <iostream>
#include "Toy.h"
#include "Woody.h"

Woody::Woody(std::string name) :
  Toy(Toy::WOODY, name, "woody.txt")
{
}

Woody::Woody(std::string name, std::string filename) :
  Toy(Toy::WOODY, name, filename)
{
}

void	Woody::speak(std::string const &str)
{
  std::cout << "WOODY: ";
  Toy::speak(str);
}
