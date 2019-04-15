//
// ex00.hpp for ex00 in /home/armita_a/rendu/piscine_cpp_d15/ex00
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Wed Jan 21 09:51:20 2015 armita_a
// Last update Wed Jan 21 10:07:40 2015 armita_a
//

#ifndef EX00_HPP
#define EX00_HPP

template<typename T>
void swap(T &a, T &b)
{
  T	c;

  c = a;
  a = b;
  b = c;
}

template<typename T>
T add(T const &a, T const &b)
{
  return a + b;
}

template<typename T>
T min(T const &a, T const &b)
{
  if (a < b)
    return a;
  return b;
}

template<typename T>
T max(T const &a, T const &b)
{
  if (a > b)
    return a;
  return b;
}

#endif
