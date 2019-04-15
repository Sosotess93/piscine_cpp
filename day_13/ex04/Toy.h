/*
** Toy.h for ex00 in /home/armita_a/rendu/piscine_cpp_d13/ex00
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Mon Jan 19 09:26:13 2015 armita_a
** Last update Mon Jan 19 15:36:57 2015 armita_a
*/

#ifndef TOY_H_
# define TOY_H_

# include <ostream>
# include <string>
# include "Picture.h"

class Toy
{
 public:
  enum ToyType {BASIC_TOY, ALIEN, BUZZ, WOODY};
  Toy();
  Toy(ToyType, std::string const&, std::string const&);
  Toy(const Toy &toy);
  ~Toy();
  std::string 	getName() const;
  std::string	getAscii() const;
  ToyType	getType() const;
  void		setName(std::string const&);
  bool		setAscii(std::string const&);
  Toy		&operator=(Toy const &toy);
  virtual void	speak(std::string const &);
  Toy		&operator<<(std::string const &);
 protected:
  std::string	_name;
  ToyType	_type;
  Picture	*_pic;
};

std::ostream	&operator<<(std::ostream &, Toy const &);

#endif /* !TOY_H_ */
