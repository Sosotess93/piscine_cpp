/*
** Woody.h for ex02 in /home/armita_a/rendu/piscine_cpp_d13/ex02
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Mon Jan 19 12:13:22 2015 armita_a
// Last update Mon Jan 19 12:33:10 2015 armita_a
*/

#ifndef WOODY_H_
# define WOODY_H_

#include <string>
#include "Toy.h"

class Woody : public Toy
{
 public:
  Woody(std::string name);
  Woody(std::string name, std::string filename);
};


#endif /* !WOODY_H_ */
