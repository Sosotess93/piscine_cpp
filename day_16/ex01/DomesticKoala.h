/*
** DomesticKoala.h for ex01 in /home/armita_a/rendu/piscine_cpp_d16/ex01
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Thu Jan 22 22:42:37 2015 armita_a
** Last update Fri Jan 23 08:17:11 2015 armita_a
*/

#ifndef DOMESTICKOALA_H_
# define DOMESTICKOALA_H_

# include <vector>
# include <map>
# include <string>
# include "KoalaAction.h"

class	DomesticKoala
{
public:
  DomesticKoala(KoalaAction&);
  ~DomesticKoala();
  DomesticKoala(const DomesticKoala&);

  typedef void (KoalaAction::*methodPointer_t)(const std::string &);
  DomesticKoala& operator=(const DomesticKoala&);
  std::vector<methodPointer_t> const * getActions(void) const;
  void learnAction(unsigned char, methodPointer_t);
  void unlearnAction(unsigned char);
  void doAction(unsigned char, const std::string&);
  void setKoalaAction(KoalaAction&);
  std::map<unsigned char, methodPointer_t>	getMap() const;
private:
  std::map<unsigned char, methodPointer_t>	_m;
  KoalaAction					_k;
};

#endif /* !DOMESTICKOALA_H_ */
