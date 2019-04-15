/*
** String.h for ex00 in /home/armita_a/rendu/piscine_cpp_d03/ex00
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Fri Jan  9 10:14:18 2015 armita_a
** Last update Fri Jan  9 11:15:16 2015 armita_a
*/

#ifndef STRING_H_
# define STRING_H_

typedef struct String
{
  char	*str;
}		String;

void	StringInit(String*, char const*);
void    StringDestroy(String*);

#endif /* !STRING_H_ */
