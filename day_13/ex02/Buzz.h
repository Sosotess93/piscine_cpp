/*
** Buzz.h for ex02 in /home/armita_a/rendu/piscine_cpp_d13/ex02
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Mon Jan 19 12:11:50 2015 armita_a
// Last update Mon Jan 19 12:33:25 2015 armita_a
*/

#ifndef BUZZ_H_
# define BUZZ_H_

#include "Toy.h"

class Buzz : public Toy
{
 public:
  Buzz(std::string name);
  Buzz(std::string name, std::string filename);
};

#endif /* !BUZZ_H_ */
