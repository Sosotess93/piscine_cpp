/*
** Cesar.h for ex02 in /home/armita_a/rendu/piscine_cpp_d17/ex02
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Fri Jan 23 11:14:59 2015 armita_a
** Last update Fri Jan 23 13:37:21 2015 armita_a
*/

#ifndef CESAR_H_
# define CESAR_H_

#include "IEncryptionMethod.h"

class Cesar : public IEncryptionMethod
{
  public:
  Cesar();
  void encryptChar(char plainchar);
  void decryptChar(char cipherchar);
  void reset();
 private:
  char		_val;

};


#endif /* !CESAR_H_ */
