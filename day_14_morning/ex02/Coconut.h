/*
** Coconut.h for ex02 in /home/armita_a/rendu/piscine_cpp_d14m/ex02
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Tue Jan 20 14:40:30 2015 armita_a
// Last update Tue Jan 20 14:45:05 2015 armita_a
*/

#ifndef COCONUT_H_
# define COCONUT_H_

#include "Fruit.h"

class Coconut : public Fruit
{
 public:
  Coconut();
  ~Coconut();
  std::string	getName() const;
};

#endif /* !COCONUT_H_ */
