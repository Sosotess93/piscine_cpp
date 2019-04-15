/*
** sickkoalalist.h for ex05 in /home/armita_a/rendu/piscine_cpp_d06/ex05
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Mon Jan 12 21:33:10 2015 armita_a
** Last update Mon Jan 12 23:49:45 2015 armita_a
*/

#ifndef KOALALNURSELIST_H_
# define KOALALNURSELIST_H_

#include "koalanurse.h"

class	KoalaNurseList
{
 public :
  KoalaNurseList(KoalaNurse *Koala);
  ~KoalaNurseList();
  bool	isEnd();
  void	append(KoalaNurseList *node);
  KoalaNurseList   *remove(KoalaNurseList *node);
  KoalaNurseList	*getFromID(int id);
  void	dump();
  KoalaNurseList	*getContent();
  KoalaNurseList	*getNext();
  KoalaNurseList	*removeFromID(int id);
   private :
  KoalaNurseList	*list;
  KoalaNurseList	*next;
  KoalaNurse	*koala;
};


#endif /* !SICKKOALALIST_H */
