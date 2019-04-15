/*
** String.c for ex00 in /home/armita_a/rendu/piscine_cpp_d03/ex00
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Fri Jan  9 10:23:32 2015 armita_a
** Last update Fri Jan  9 14:54:25 2015 armita_a
*/

#include <stdlib.h>
#include <string.h>
#include "String.h"

void    StringInit(String* this, char const * s)
{
  if (!this | !(this->str = malloc(sizeof(char) * (strlen(s) + 1))))
    return;
  this->str[0] = '\0';
  this->str = strcat(this->str, s);
}

void	StringDestroy(String* this)
{
  if (this && this->str)
    {
      free(this->str);
      this->str = NULL;
    }
}
