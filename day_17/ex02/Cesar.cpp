//
// Cesar.cpp for ex02 in /home/armita_a/rendu/piscine_cpp_d17/ex02
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Fri Jan 23 11:14:53 2015 armita_a
// Last update Fri Jan 23 13:56:05 2015 armita_a
//

#include <iostream>
#include "Cesar.h"

Cesar::Cesar() : _val(3) {}


void Cesar::encryptChar(char plainchar)
{
  int		index = 0;

  if ((plainchar >= 'a' && plainchar <= 'z')
      || (plainchar >= 'A' && plainchar <= 'Z'))
  {
    while (index < (_val % 26))
      {
	plainchar += 1;
	if (plainchar == 'z' + 1
	    || plainchar == 'Z' + 1)
	  plainchar -= 26;
	++index;
      }
  }
  std::cout << plainchar;
  ++_val;
}

void Cesar::decryptChar(char plainchar)
{
  int		index = 0;

  if ((plainchar >= 'a' && plainchar <= 'z')
      || (plainchar >= 'A' && plainchar <= 'Z'))
  {
    while (index < (_val % 26))
      {
	plainchar -= 1;
	if (plainchar == 'a' - 1
	    || plainchar == 'A' - 1)
	  plainchar += 26;
	++index;
      }
  }
  std::cout << plainchar;
  ++_val;
}

void Cesar::reset()
{
  _val = 3;
}
