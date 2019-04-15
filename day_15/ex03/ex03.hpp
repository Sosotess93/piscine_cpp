//
// ex03.hpp for ex03 in /home/armita_a/rendu/piscine_cpp_d15/ex03
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Wed Jan 21 12:02:32 2015 armita_a
// Last update Wed Jan 21 12:17:13 2015 armita_a
//

#ifndef EX03_HPP
#define EX03_HPP

#include <iostream>

template<typename T>
void	foreach(const T *tab, void (*func)(const T&), int size)
{
  int	index = 0;

  while (index < size)
    func(tab[index++]);
}


template<typename T>
void	print(const T &elem)
{
  std::cout << elem << std::endl;
}

#endif
