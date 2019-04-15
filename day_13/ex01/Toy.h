/*
** Toy.h for ex00 in /home/armita_a/rendu/piscine_cpp_d13/ex00
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Mon Jan 19 09:26:13 2015 armita_a
** Last update Mon Jan 19 15:33:18 2015 armita_a
*/

#ifndef TOY_H_
# define TOY_H_

#include <string>
#include "Picture.h"

class Toy
{
 public:
  enum ToyType {BASIC_TOY, ALIEN};
  Toy();
  Toy(ToyType, std::string const&, std::string const&);
  Toy(const Toy &toy);
  ~Toy();
  std::string	getName() const;
  std::string	getAscii() const;
  ToyType	getType() const;
  void		setName(std::string const&);
  bool		setAscii(std::string const&);
  Toy		&operator=(const Toy &toy);
 private:
  std::string	_name;
  ToyType	_type;
  Picture	*_pic;
};


#endif /* !TOY_H_ */
