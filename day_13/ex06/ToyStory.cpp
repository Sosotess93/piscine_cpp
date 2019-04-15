//
// ToyStory.cpp for ex05 in /home/armita_a/rendu/piscine_cpp_d13/ex05
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Mon Jan 19 16:56:39 2015 armita_a
// Last update Tue Jan 20 08:06:52 2015 armita_a
//

#include <iostream>
#include <fstream>
#include "ToyStory.h"
#include "Toy.h"


ToyStory::ToyStory()
{
}

void	ToyStory::tellMeAStory(std::string const &filename,
			       Toy &toy1, bool (Toy::*func1)(const std::string),
			       Toy &toy2, bool (Toy::*Func2)(const std::string))
{
  Toy		*ptr_toy;
  std::ifstream	file;
  std::string	tmp;

  ptr_toy =  &toy1;
  file.open(filename.data());
  if (toy1.getLastError().type != Toy::Error::UNKNOWN
      || toy2.getLastError().type != Toy::Error::UNKNOWN)
    return;
  std::cout << toy1.getAscii() << std::endl;
  std::cout << toy2.getAscii() << std::endl;

  if (!file.is_open())
    {
      std::cout << "Bad Story" << std::endl;
      return;
    }
  std::getline(file, tmp);

  if (tmp.compare(0, 8, "picture:"))
      ptr_toy->setAscii(tmp.compare(tmp.substr(8)));
  file.close();
}
