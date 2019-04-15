/*
** String.c for ex00 in /home/armita_a/rendu/piscine_cpp_d03/ex00
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Fri Jan  9 10:23:32 2015 armita_a
** Last update Fri Jan  9 14:54:41 2015 armita_a
*/

#include <stdlib.h>
#include <string.h>
#include "String.h"

static void	assign_s(String *this, String const * str)
{
  if (!this || !str || !str->str)
    return;
  StringDestroy(this);
  if (!(this->str = malloc(sizeof(char) * (strlen(str->str) + 1))))
    return;
  this->str[0] = '\0';
  this->str = strcat(this->str, str->str);
}

static	void assign_c(String *this, char const * s)
{
  StringDestroy(this);
  StringInit(this, s);
}

void    StringInit(String* this, char const * s)
{
  if (!this | !(this->str = malloc(sizeof(char) * (strlen(s) + 1))))
    return;
  this->str[0] = '\0';
  this->str = strcat(this->str, s);
  this->assign_s = &assign_s;
  this->assign_c = &assign_c;
}

void	StringDestroy(String* this)
{
  if (this && this->str)
    {
      free(this->str);
      this->str = NULL;
    }
}
