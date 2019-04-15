//
// sickkoala.cpp for ex02 in /home/armita_a/rendu/piscine_cpp_d06/ex02
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Mon Jan 12 13:41:52 2015 armita_a
// Last update Tue Jan 13 01:53:00 2015 armita_a
//

#include <iostream>
#include <string>
#include "sickkoala.h"

SickKoala::SickKoala(std::string name)
{
  if (name.empty())
    return ;
  this->name = name;
}

SickKoala::~SickKoala()
{
  std::cout << "Mr." << this->name << ": Kreooogg !! Je suis gueriiii !" << std::endl;
}

void	SickKoala::poke()
{
   std::cout << "Mr." << this->name << ": Gooeeeeerrk !! :'(" << std::endl;
}

std::string	small_drug(std::string drug)
{
  unsigned int	index = 0;

  while (index < drug.length())
    {
      if (drug.at(index) >= 65 && drug.at(index) <= 90)
	drug.at(index) += 32;
      index++;
    }
 return drug;
}


bool	SickKoala::takeDrug(std::string drug)
{
  if (small_drug(drug) == "mars")
    std::cout << "Mr." << this->name << ": Mars, et ca kreog !" << std::endl;
  else if (drug == "buronzand")
    std::cout << "Mr." << this->name << ": Et la fatigue a fait son temps !" << std::endl;
  else
    {
      std::cout << "Mr." << this->name << ": Goerkreog !" << std::endl;
      return false;
    }
  return true;
}

void	SickKoala::overDrive(std::string str)
{
  size_t	pos;
  pos = str.find("Kreog !");
  while (pos != std::string::npos)
    {
      str = str.replace(pos, 7, "1337 !");
      pos = str.find("Kreog !");
    }
  std::cout << "Mr." << this->name << ": " << str  << std::endl;
}

std::string	SickKoala::getName()
{
  return this->name;
}
