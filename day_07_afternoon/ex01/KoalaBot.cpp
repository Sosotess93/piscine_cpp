//
// KoalaBot.cpp for ex01 in /home/armita_a/rendu/piscine_cpp_d07a/ex01
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Tue Jan 13 19:17:56 2015 armita_a
// Last update Tue Jan 13 21:00:07 2015 armita_a
//

#include <iostream>
#include <iomanip>
#include "KoalaBot.h"

KoalaBot::KoalaBot()
{
  this->_serial = "Bob-01";
}

void	KoalaBot::setParts(std::string	const ref)
{
  if (ref.at(0) == 'A')
    this->_arms.serial() = ref;
  else if (ref.at(0) == 'L')
    this->_legs.serial() = ref;
  else if (ref.at(0) == 'H')
    this->_head.serial() = ref;
}

void	 KoalaBot::swapParts(std::string ref)
{
   if (ref.at(0) == 'A')
    this->_arms.serial() = ref;
  else if (ref.at(0) == 'L')
    this->_legs.serial() = ref;
  else if (ref.at(0) == 'H')
    this->_head.serial() = ref;
}

void	 KoalaBot::informations()
{
  std::cout << "[KoalaBot] " << _serial  << std::endl;
  _arms.informations();
std::cout << std::endl;
  _legs.informations();
  std::cout << std::endl;
  _head.informations();
  std::cout << std::right << std::endl;
}

bool	 KoalaBot::status()
{
  if (_arms.isFunctionnal() && _legs.isFunctionnal() && _head.isFunctionnal())
    return true;
  return false;
}
