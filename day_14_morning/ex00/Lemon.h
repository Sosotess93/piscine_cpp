/*
** Lemon.h for ex00 in /home/armita_a/rendu/piscine_cpp_d14m/ex00
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Tue Jan 20 09:13:08 2015 armita_a
// Last update Tue Jan 20 09:24:02 2015 armita_a
*/

#ifndef LEMON_H_
# define LEMON_H_

#include "Fruit.h"

class Lemon : public Fruit
{
 public:
  Lemon();
  ~Lemon();
   std::string	getName() const;
};

#endif /* !LEMON_H_ */
