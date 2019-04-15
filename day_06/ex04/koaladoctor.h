/*
** koaladoctor.h for ex04 in /home/armita_a/rendu/piscine_cpp_d06/ex04
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Mon Jan 12 19:26:28 2015 armita_a
// Last update Mon Jan 12 20:07:50 2015 armita_a
*/

#ifndef KOALADOCTOR_H_
# define KOALADOCTOR_H_

#include <string>
#include "sickkoala.h"

class KoalaDoctor
{
 public :
  KoalaDoctor(std::string name);
  ~KoalaDoctor();
  void diagnose(SickKoala *koala);
  void timeCheck();
private :
  bool	is_working;
  std::string	name;
};

#endif /* !KOALADOCTOR_H_ */
