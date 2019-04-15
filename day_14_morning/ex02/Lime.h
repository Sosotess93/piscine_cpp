/*
** Lime.h for ex01 in /home/armita_a/rendu/piscine_cpp_d14m/ex01
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Tue Jan 20 13:10:41 2015 armita_a
// Last update Tue Jan 20 13:25:00 2015 armita_a
*/

#ifndef LIME_H_
# define LIME_H_

#include "Lemon.h"

class Lime : public Lemon
{
 public:
  Lime();
  ~Lime();
  virtual std::string	getName() const;
};


#endif /* !LIME_H_ */
