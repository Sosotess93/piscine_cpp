/*
** String.c for ex00 in /home/armita_a/rendu/piscine_cpp_d03/ex00
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Fri Jan  9 10:23:32 2015 armita_a
** Last update Sat Jan 10 08:22:48 2015 armita_a
*/

#include <stdlib.h>
#include <string.h>
#include "String.h"

static size_t        copy(String* this, char* s, size_t n, size_t pos)
{
  if (!this || !this->str || !s || pos >= n || strlen(s) <= n)
    return - 1;
  int	index = 0;
  while (pos < n)
    s[index++] = this->str[pos++];
  s[index] = '\0';
  return index;
}

static int	compare_c(struct String *this, char const* str)
{
  if (this && this->str && str )
    return strcmp(this->str, str);
  return -1;
}

static int	compare_s(String *this, const String* str)
{
  if (this && this->str && str && str->str)
    return strcmp(this->str, str->str);
  return -1;
}

static int	size(String* this)
{
  if (!this || !this->str)
    return -1;
  return strlen(this->str);
}

static void	clear(String* this)
{
  if (!this || !this->str)
    return;
  this->str[0] = '\0';
}

static char	at(String* this, size_t pos)
{
  if (!this || !this->str || (int)strlen(this->str) <= (int)pos)
    return -1;
  return this->str[(int)pos];
}

static void	append_s(String* this, String const* ap)
{
  char	*tmp;

  if (!this || !this->str || !ap)
    return;

  if (!(tmp = malloc(sizeof(char) * (strlen(this->str) + strlen(ap->str)+ 1))))
    return;
  tmp[0] = '\0';
  strcat(tmp, this->str);
  strcat(tmp, ap->str);
  StringDestroy(this);
  this->str = tmp;
}

static void	append_c(String* this, char const *ap)
{
  char	*tmp;

  if (!this || !this->str || !ap)
    return;
  if (!(tmp = malloc(sizeof(char) * (strlen(this->str) + strlen(ap)+ 1))))
    return;
  tmp[0] = '\0';
  strcat(tmp, this->str);
  strcat(tmp, ap);
  StringDestroy(this);
  this->str = tmp;
}


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
  this->append_c = &append_c;
  this->append_s = &append_s;
  this->at = &at;
  this->clear = &clear;
  this->size = &size;
  this->compare_c = &compare_c;
  this->compare_s = &compare_s;
  this->copy = &copy;
}

void	StringDestroy(String* this)
{
  if (this && this->str)
    {
      free(this->str);
      this->str = NULL;
    }
}
