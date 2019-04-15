//
// Parts.cpp for ex01 in /home/armita_a/rendu/piscine_cpp_d07a/ex01
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Tue Jan 13 18:32:17 2015 armita_a
// Last update Tue Jan 13 20:21:56 2015 armita_a
//

#include <string>
#include <iostream>
#include "Parts.h"

// Arms
Arms::Arms(std::string const& serial, bool functionnal)
{
  this->_is_functionnal = functionnal;
  this->_serial = serial;
}

bool		Arms::isFunctionnal()
{
  return this->_is_functionnal;
}
std::string	&Arms::serial()
{
  return _serial;
}

void		Arms::informations()
{
 std::cout << "[Parts] Arms " << _serial << " status : ";
  if (_is_functionnal == true)
    std::cout << "OK";
  else
    std::cout << "KO";
}

// Legs

Legs::Legs(std::string const& serial, bool functionnal)
{
  this->_is_functionnal = functionnal;
  this->_serial = serial;
}

bool		Legs::isFunctionnal()
{
  return this->_is_functionnal;
}
std::string	&Legs::serial()
{
  return _serial;
}

void		Legs::informations()
{
 std::cout << "[Parts] Legs " << _serial << " status : ";
  if (_is_functionnal == true)
    std::cout << "OK";
  else
    std::cout << "KO";
}

// head

Head::Head(std::string const& serial, bool functionnal)
{
  this->_is_functionnal = functionnal;
  this->_serial = serial;
}

bool		Head::isFunctionnal()
{
  return this->_is_functionnal;
}
std::string	&Head::serial()
{
  return _serial;
}

void		Head::informations()
{
 std::cout << "[Parts] Head " << _serial << " status : ";
  if (_is_functionnal == true)
    std::cout << "OK";
  else
    std::cout << "KO";
}
