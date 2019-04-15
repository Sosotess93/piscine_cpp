//
// find.hpp for ex00 in /home/armita_a/rendu/piscine_cpp_d17/ex00
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Fri Jan 23 09:04:26 2015 armita_a
// Last update Fri Jan 23 10:35:54 2015 armita_a
//

#ifndef FIND_HPP
#define FIND_HPP

#include <algorithm>

template<typename T>
typename T::iterator do_find(T &contener, int value)
{
  return std::find(contener.begin(),contener.end(), value);
}

#endif
