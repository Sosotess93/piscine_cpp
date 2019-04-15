//
// ex02.hpp for  in /home/charra_s/TEK2/{PISCINE} TEK2 {PISCINE}/piscine_cpp_2014/day_15/ex02
// 
// Made by Sofiane Charrad
// Login   <charra_s@epitech.net>
// 
// Started on  Wed Jan 20 14:39:52 2016 Sofiane Charrad
// Last update Wed Jan 20 15:43:05 2016 Sofiane Charrad
//

#ifndef EX02_HPP
#define EX02_HPP

#include <iostream>

template<typename T>
T min(T const &a, T const &b)
{
  std::cout << "template min" << std::endl;
  if (a <= b)
    return a;
  return b ;
}

int	min(int a, int b)
{
 std::cout << "non-template min" << std::endl;
 if (a <= b)
    return a;
  return b;
}


template<typename T>
T templateMin(const T *tab,  const int &size)
{
  int		index = 1;
  T		save;

  save = tab[0];
  while (index < size)
    save = min<T>(tab[index++], save);
  return save;
}

int	nonTemplateMin(const int *tab, const int &size)
{
  int		index = 1;
  int		save;

  save = tab[0];
  while (index < size)
    save = min(tab[index++], save);
  return save;
}

#endif
