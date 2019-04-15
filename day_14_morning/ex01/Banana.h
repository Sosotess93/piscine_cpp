/*
** Banana.h for ex00 in /home/armita_a/rendu/piscine_cpp_d14m/ex00
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Tue Jan 20 09:08:58 2015 armita_a
// Last update Tue Jan 20 09:34:34 2015 armita_a
*/

#ifndef BANANA_H_
# define BANANA_H_

#include "Fruit.h"

class Banana : public Fruit
{
 public:
  Banana();
  ~Banana();
  virtual std::string	getName() const;
};


#endif /* !BANANA_H_ */
