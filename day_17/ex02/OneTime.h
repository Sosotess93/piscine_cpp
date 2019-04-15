/*
** OneTime.h for ex02 in /home/armita_a/rendu/piscine_cpp_d17/ex02
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Fri Jan 23 11:14:39 2015 armita_a
// Last update Fri Jan 23 14:05:14 2015 armita_a
*/

#ifndef ONETIME_H_
# define ONETIME_H_

# include <list>
# include <string>
# include "IEncryptionMethod.h"

class OneTime : public IEncryptionMethod
{
 public:
  OneTime(std::string const& key);
  void	decryptChar(char cipherchar);
  void	encryptChar(char plainchar);
  void	reset();
 private:
  int			_index;
  std::string		_key;
};


#endif /* !ONETIME_H_ */
