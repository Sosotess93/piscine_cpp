/*
** Toy.h for ex00 in /home/armita_a/rendu/piscine_cpp_d13/ex00
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Mon Jan 19 09:26:13 2015 armita_a
** Last update Tue Jan 20 08:05:46 2015 armita_a
*/

#ifndef TOY_H_
# define TOY_H_

# include <ostream>
# include <string>
# include "Picture.h"

class Toy
{
 public:

  class Error
  {
  public :
    typedef enum ErrorType {UNKNOWN, PICTURE, SPEAK} ErrorType;
    Error();
    std::string	what() const;
    std::string	where() const;
    ErrorType	type;
  };


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
  virtual bool	speak_es(std::string const &);
  Toy		&operator<<(std::string const &) ;
  Error		getLastError();

 protected:
  std::string	_name;
  ToyType	_type;
  Picture	*_pic;
  Error		_error;
};

std::ostream	&operator<<(std::ostream &, Toy const &);

#endif /* !TOY_H_ */
