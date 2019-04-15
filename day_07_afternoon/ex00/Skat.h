/*
** Skat.h for ex00 in /home/armita_a/rendu/piscine_cpp_d07a/ex00
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Tue Jan 13 16:45:11 2015 armita_a
** Last update Tue Jan 13 20:08:36 2015 armita_a
*/

#ifndef SKAT_H_
# define SKAT_H_

#include <iostream>
#include <string>

class Skat
{
 public:
  Skat(std::string const& name = "bob", int stimPaks = 15);
  ~Skat();

  int	&stimPaks();
  const std::string& name();

  void	shareStimPaks(int number, int& stock);
  void	addStimPaks(unsigned int number);
  void	useStimPaks();
  void	status();

private:
  int		_stimPaks;
  std::string 	_name;

};

#endif /* !SKAT_H_ */
