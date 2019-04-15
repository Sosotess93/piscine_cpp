//
// Buzz.cpp for ex02 in /home/armita_a/rendu/piscine_cpp_d13/ex02
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Mon Jan 19 12:33:45 2015 armita_a
// Last update Tue Jan 20 07:56:03 2015 armita_a
//

#include <iostream>
#include "Toy.h"
#include "Buzz.h"

Buzz::Buzz(std::string name) :
  Toy(Toy::WOODY, name, "buzz.txt")
{
}

Buzz::Buzz(std::string name, std::string filename) :
  Toy(Toy::WOODY, name, filename)
{
}

void	Buzz::speak(std::string const &str)
{
  std::cout << "BUZZ: ";
  Toy::speak(str);
}

bool	Buzz::speak_es(std::string const &str)
{
  std::cout << "BUZZ: " << getName() << " senorita " << " \"" << str << "\" " << " senorita" << std::endl;
  Toy::speak(str);
  return true;
}
