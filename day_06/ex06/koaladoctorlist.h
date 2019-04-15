/*
** sickkoalalist.h for ex05 in /home/armita_a/rendu/piscine_cpp_d06/ex05
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Mon Jan 12 21:33:10 2015 armita_a
** Last update Mon Jan 12 23:48:56 2015 armita_a
*/

#ifndef KOALALDOCTORLIST_H_
# define KOALALDOCTORLIST_H_

#include "sickkoala.h"

class	KoalaDoctorList
{
 public :
  KoalaDoctorList(KoalaDoctor *Koala);
  ~KoalaDoctorList();
  bool	isEnd();
  void	append(KoalaDoctorList *node);
  KoalaDoctorList   *remove(KoalaDoctorList *node);
  KoalaDoctorList	*getFromName(std::string name);
  void	dump();
  KoalaDoctorList	*getContent();
  KoalaDoctorList	*getNext();
  KoalaDoctorList	*removeFromName(std::string name);
   private :
  KoalaDoctorList	*list;
  KoalaDoctorList	*next;
  KoalaDoctor	*koala;
};


#endif /* !KOALALDOCTORLIST_H_ */
