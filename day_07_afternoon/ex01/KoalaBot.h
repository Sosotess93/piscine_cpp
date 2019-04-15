/*
** KoalaBot.h for ex01 in /home/armita_a/rendu/piscine_cpp_d07a/ex01
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Tue Jan 13 19:17:47 2015 armita_a
** Last update Tue Jan 13 20:32:28 2015 armita_a
*/

#ifndef KOALABOT_H_
# define KOALABOT_H_

#include "Parts.h"

class KoalaBot
{
public:
  KoalaBot();
  void	setParts(std::string const ref);
  void	swapParts(std::string ref);
  void	informations();
  bool	status();
  std::string	&serial();
private:
  Head	_head;
  Legs	_legs;
  Arms	_arms;
  std::string	_serial;
};


#endif /* !KOALABOT_H_ */
