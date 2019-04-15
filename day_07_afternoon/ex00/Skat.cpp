//
// Skat.cpp for ex00 in /home/armita_a/rendu/piscine_cpp_d07a/ex00
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Tue Jan 13 16:49:52 2015 armita_a
// Last update Tue Jan 13 23:38:24 2015 armita_a
//

#include <string>
#include <iostream>
#include "Skat.h"

Skat::Skat(std::string const& name, int stimPaks)
{
  this->_name = name;
  this->_stimPaks = stimPaks;
}

Skat::~Skat()
{
}

int	&Skat::stimPaks()
{
  return this->_stimPaks;
}

const std::string	&Skat::name()
{
  return this->_name;
}

void	Skat::shareStimPaks(int number,  int& stock)
{
  if (number > this->_stimPaks)
    std::cout << "Don't be greedy" << std::endl;
  else
    {
      this->_stimPaks -= number;
      stock += number;
      std::cout << "Keep the change." << std::endl;
    }
}

void	Skat::addStimPaks(unsigned int number)
{
  if (number == 0)
    std::cout << "Hey boya, did you forget something ?" << std::endl;
  else
      this->_stimPaks += number;
}

void	Skat::useStimPaks()
{
  if (this->_stimPaks != 0)
    {
      std::cout << "Time to kick some ass and chew bubble gum." << std::endl;
      this->_stimPaks -= 1;
    }
  else
    std::cout << "Mediiiiiic" << std::endl;
}

void	Skat::status()
{
  if (this )
    std::cout << "Soldier " << this->_name << " reporting " << this->_stimPaks << " stimpaks remaining sir !" << std::endl;
}
