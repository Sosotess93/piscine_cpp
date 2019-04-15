/*
** koalanurse.h for ex03 in /home/armita_a/rendu/piscine_cpp_d06/ex03
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Mon Jan 12 17:21:08 2015 armita_a
** Last update Mon Jan 12 18:56:15 2015 armita_a
*/

#ifndef KOALANURSE_H_
# define KOALANURSE_H_

#include <string>
#include "sickkoala.h"

class KoalaNurse
{
 public :
  KoalaNurse(int id);
  ~KoalaNurse();
  void	giveDrug(std::string drug, SickKoala* koala);
  std::string	readReport(std::string report);
  void	timeCheck();
  bool	is_working;

 private :
  int	id;
};

#endif /* !KOALANURSE_H_ */
