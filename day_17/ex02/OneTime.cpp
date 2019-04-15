//
// OneTime.cpp for ex02 in /home/armita_a/rendu/piscine_cpp_d17/ex02
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Fri Jan 23 11:15:11 2015 armita_a
// Last update Fri Jan 23 14:24:00 2015 armita_a
//

#include <iostream>
#include "OneTime.h"

OneTime::OneTime(std::string const& key)
{
  unsigned int	tmp = 0;
  _key = key;
  while ( tmp < _key.size())
    {
      if (_key[tmp] >= 'a' && _key[tmp] <= 'z')
	_key[tmp] -= 'a';
      else if(_key[tmp] >= 'A' && _key[tmp] <= 'Z')
	_key[tmp] -= 'A';
      ++tmp;
    }
  _index = 0;
}

void	OneTime::decryptChar(char cipherchar)
{
  int	tmp = 0;
    if ((cipherchar >= 'a' && cipherchar <= 'z')
      || (cipherchar >= 'A' && cipherchar <= 'Z'))
      {
	while (tmp < _key[_index])
	  {
	    cipherchar -= 1;
	    if (cipherchar == 'a' - 1
		|| cipherchar == 'A' - 1)
	      cipherchar += 26;
	    ++tmp;
	  }
      }
    std::cout << cipherchar;
   ++_index;
   if (_index == _key.size())
     _index = 0;
}

void	OneTime::encryptChar(char cipherchar)
{
  int	tmp = 0;
    if ((cipherchar >= 'a' && cipherchar <= 'z')
      || (cipherchar >= 'A' && cipherchar <= 'Z'))
      {
	while (tmp < _key[_index])
	  {
	    cipherchar += 1;
	    if (cipherchar == 'z' + 1
		|| cipherchar == 'Z' + 1)
	      cipherchar -= 26;
	    ++tmp;
	  }
      }
    std::cout << cipherchar;
   ++_index;
   if (_index == _key.size())
     _index = 0;

}

void	OneTime::reset()
{
  _index = 0;
}
