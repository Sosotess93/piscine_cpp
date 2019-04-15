/*
** Picture.h for ex00 in /home/armita_a/rendu/piscine_cpp_d13/ex00
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Mon Jan 19 09:19:48 2015 armita_a
** Last update Mon Jan 19 12:07:10 2015 armita_a
*/

#ifndef PICTURE_H_
# define PICTURE_H_

#include <string>

class	Picture
{
 public:
  std::string	data;
  Picture();
  Picture(std::string const &);
  Picture(Picture &pic);
  ~Picture();
  Picture	&operator=(Picture &);
  bool		getPictureFromFile(const std::string &path);
};

#endif /* !PICTURE_H_ */
