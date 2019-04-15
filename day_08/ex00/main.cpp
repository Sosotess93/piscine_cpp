//
// main.cpp for piscine_cpp_d08 in /home/armita_a/rendu/piscine_cpp_d08
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Wed Jan 14 11:39:23 2015 armita_a
// Last update Wed Jan 13 21:48:08 2016 Sofiane Charrad
//

#include <iostream>
#include "droid.hh"

int main()
{
  Droid d;
  Droid d1("Avenger");
  size_t Durasel = -800;

  std::cout << d << std::endl;
  std::cout << d1 << std::endl;
  d = d1;
  d.setStatus(new std::string("Kill Kill Kill!"));
  d << Durasel;
  std::cout << d << "--" << Durasel << std::endl;
  Droid d2 = d;
  d.setId("Rex");
  std::cout << (d2 != d) << std::endl;
  if (d != d1)
    return (1);
  return (0);
}
