//
// ex04.cpp for ex04 in /home/armita_a/rendu/piscine_cpp_d15/ex04
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Wed Jan 21 13:42:10 2015 armita_a
// Last update Wed Jan 21 14:55:11 2015 armita_a
//

#include "ex04.hpp"

template<typename T>
bool	equal(const T &a, const T &b)
{
  return (a == b);
}

template<class T>
bool	Tester<T>::equal(const T &a, const T &b)
{
  return (a == b);
}

template bool equal<int>(const int&, const int&);
template bool equal<float>(const float&, const float&);
template bool equal<double>(const double&, const double&);
template bool equal<std::string>(const std::string&, const std::string&);

template class Tester<int>;
template class Tester<float>;
template class Tester<double>;
template class Tester<std::string>;
