//
// Sickkoalalist.cpp for ex05 in /home/armita_a/rendu/piscine_cpp_d06/ex05
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Mon Jan 12 21:36:22 2015 armita_a
// Last update Mon Jan 12 23:50:43 2015 armita_a
//

#include <iostream>
#include "koalanurse.h"
#include "koalanurselist.h"

KoalaNurseList::KoalaNurseList(KoalaNurse *Koala)
{
  this->next =  NULL;
  this->koala = Koala;
  this->list = this;
}

KoalaNurseList::~KoalaNurseList()
{
}

bool	KoalaNurseList::isEnd()
{
  if (!this->next)
    return true;
  return false;
}

void	KoalaNurseList::append(KoalaNurseList *node)
{
  KoalaNurseList	*tmp;

  tmp = this->list;
  while (tmp && tmp->next)
    tmp = tmp->next;
  tmp->next = node;
}

KoalaNurseList   *KoalaNurseList::remove(KoalaNurseList *node)
{
  KoalaNurseList	*tmp;
  KoalaNurseList *prev;

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


KoalaNurseList	*KoalaNurseList::getFromID(int id)
{
  KoalaNurseList *tmp;

  tmp = this->list;
  while (tmp && tmp->koala->getID() != id)
    tmp = tmp->next;
  if (tmp)
    return tmp;
  return NULL;
}

void	KoalaNurseList::dump()
{
  KoalaNurseList	*tmp;

  tmp = this->list;
  std::cout << "Liste des medecins : ";
  while (tmp)
    {
      if (!tmp->koala)
	std::cout << "[NULL]";
      else
	std::cout << tmp->koala->getID();
      tmp = tmp->next;
      if (tmp)
	std::cout << ", ";
    }
  std::cout << std::endl;
}

KoalaNurseList   *KoalaNurseList::getContent()
{
  return this->list;
}

KoalaNurseList   *KoalaNurseList::getNext()
{
  if (this->next)
    return this->next;
  return NULL;
}

KoalaNurseList   *KoalaNurseList::removeFromID(int id)
{
  KoalaNurseList	*tmp;
  KoalaNurseList	*prev;

  tmp = this->list;
  prev = this->list;
  while (tmp && tmp->koala && tmp->koala->getID() != id)
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
