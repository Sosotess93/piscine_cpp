/*
** ToyStory.h for ex05 in /home/armita_a/rendu/piscine_cpp_d13/ex05
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Mon Jan 19 16:56:39 2015 armita_a
// Last update Mon Jan 19 17:41:28 2015 armita_a
*/

#ifndef TOYSTORY_H_
# define TOYSTORY_H_

#include <string>
#include "Toy.h"

class ToyStory
{
 public:
  ToyStory();
  void	tellMeAStory(std::string const &, Toy &, bool (Toy::*func1)(std::string) , Toy &, bool (Toy::*Func2)(std::string));
 private:
};

#endif /* !TOYSTORY_H_ */
