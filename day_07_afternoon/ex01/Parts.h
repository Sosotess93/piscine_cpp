/*
** Parts.h for ex01 in /home/armita_a/rendu/piscine_cpp_d07a/ex01
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Tue Jan 13 18:32:22 2015 armita_a
** Last update Tue Jan 13 20:09:39 2015 armita_a
*/

#ifndef PARTS_H_
# define PARTS_H_

#include <string>

class Arms
{
 public:
  Arms(std::string const& serial = "A-01", bool functionnal = true);
  bool isFunctionnal();
  std::string& serial();
  void informations();
private:
  bool		_is_functionnal;
  std::string 	_serial;
};

class Legs
{
 public:
  Legs(std::string const& serial = "L-01", bool functionnal = true);
  bool isFunctionnal();
  std::string& serial();
  void informations();
private:
  bool		_is_functionnal;
  std::string 	_serial;
};

class Head
{
 public:
  Head(std::string const& serial = (std::string const)"H-01", bool functionnal = true);
  bool isFunctionnal();
  std::string& serial();
  void informations();
private:
  int		_is_functionnal;
  std::string	_serial;

};

#endif /* !PARTS_H_ */
