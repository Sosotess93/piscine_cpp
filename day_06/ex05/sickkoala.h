/*
** sickkoala.h for ex02 in /home/armita_a/rendu/piscine_cpp_d06/ex02
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Mon Jan 12 15:24:07 2015 armita_a
// Last update Mon Jan 12 19:35:52 2015 armita_a
*/

#ifndef SICKKOALA_H_
# define SICKKOALA_H_
# include <string>

struct SickKoala
{
  SickKoala(std::string name);
  ~SickKoala(void);

  std::string	name;

  bool	takeDrug(std::string drug);
  void	overDrive(std::string str);
  void	poke();
  std::string getName();
};

#endif /* !SICKKOALA_H_ */
