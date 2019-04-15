//
// sickkoalalist.cpp for ex05 in /home/armita_a/rendu/piscine_cpp_d06/ex05
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Mon Jan 12 21:36:22 2015 armita_a
// Last update Mon Jan 12 23:14:04 2015 armita_a
//

#include <iostream>
#include "sickkoala.h"
#include "sickkoalalist.h"

SickKoalaList::SickKoalaList(SickKoala *Koala)
{
  this->next =  NULL;
  this->koala = Koala;
  this->list = this;
}

SickKoalaList::~SickKoalaList()
{
}

bool	SickKoalaList::isEnd()
{
  if (!this->next)
    return true;
  return false;
}

void	SickKoalaList::append(SickKoalaList *node)
{
  SickKoalaList	*tmp;

  tmp = this->list;
  while (tmp && tmp->next)
    tmp = tmp->next;
  tmp->next = node;
}

SickKoalaList   *SickKoalaList::remove(SickKoalaList *node)
{
  SickKoalaList	*tmp;
  SickKoalaList *prev;

  tmp = this->list;
  prev = this->list;
  while (tmp && tmp != node)
    {
      prev = tmp;
      tmp = tmp->next;
    }
  if (tmp)
      prev->next = tmp->next;
  return this->list;
}


SickKoalaList	*SickKoalaList::getFromName(std::string name)
{
  SickKoalaList *tmp;

  tmp = this->list;
  while (tmp && tmp->koala->name != name)
    tmp = tmp->next;
  if (tmp)
    return tmp;
  return NULL;
}

void	SickKoalaList::dump()
{
  SickKoalaList	*tmp;

  tmp = this->list;
  std::cout << "Liste des patients : ";
  while (tmp)
    {
      if (!tmp->koala)
	std::cout << "[NULL]";
      else
	std::cout << tmp->koala->name;
      tmp = tmp->next;
      if (tmp)
	std::cout << ", ";
    }
  std::cout << std::endl;
}

SickKoalaList   *SickKoalaList::getContent()
{
  return this->list;
}

SickKoalaList   *SickKoalaList::getNext()
{
  if (this->next)
    return this->next;
  return NULL;
}

SickKoalaList   *SickKoalaList::removeFromName(std::string name)
{
  SickKoalaList	*tmp;
  SickKoalaList	*prev;

  tmp = this->list;
  prev = this->list;
  while (tmp && tmp->koala && tmp->koala->name != name)
    {
      prev = tmp;
      tmp = tmp->next;
    }
  if (tmp && tmp->koala)
    {
      prev->next = tmp->next;
      return tmp;
    }
  return NULL;
}
