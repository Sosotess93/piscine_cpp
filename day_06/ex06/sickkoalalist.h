/*
** sickkoalalist.h for ex05 in /home/armita_a/rendu/piscine_cpp_d06/ex05
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Mon Jan 12 21:33:10 2015 armita_a
// Last update Mon Jan 12 22:48:41 2015 armita_a
*/

#ifndef SICKKOALALIST_H_
# define SICKKOALALIST_H_

#include "sickkoala.h"

class	SickKoalaList
{
 public :
  SickKoalaList(SickKoala *Koala);
  ~SickKoalaList();
  bool	isEnd();
  void	append(SickKoalaList *node);
  SickKoalaList   *remove(SickKoalaList *node);
  SickKoalaList	*getFromName(std::string name);
  void	dump();
  SickKoalaList	*getContent();
  SickKoalaList	*getNext();
  SickKoalaList	*removeFromName(std::string name);
   private :
  SickKoalaList	*list;
  SickKoalaList	*next;
  SickKoala	*koala;
};


#endif /* !SICKKOALALIST_H_ */
