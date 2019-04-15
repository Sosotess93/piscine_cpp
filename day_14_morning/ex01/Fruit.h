/*
** Fruit.h for ex00 in /home/armita_a/rendu/piscine_cpp_d14m/ex00
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Tue Jan 20 09:01:27 2015 armita_a
** Last update Tue Jan 20 09:38:21 2015 armita_a
*/

#ifndef FRUIT_H_
# define FRUIT_H_

#include <string>

class Fruit
{
 public:
  Fruit();
  Fruit(int);
  ~Fruit();
  virtual std::string	getName() const = 0;
  int			getVitamins();
protected:
  int		_vitamins;
};

#endif /* !FRUIT_H_ */
