//
// sickkoalalist.cpp for ex05 in /home/armita_a/rendu/piscine_cpp_d06/ex05
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Mon Jan 12 21:36:22 2015 armita_a
// Last update Mon Jan 12 23:37:48 2015 armita_a
//

#include <iostream>
#include "koaladoctor.h"
#include "koaladoctorlist.h"

KoalaDoctorList::KoalaDoctorList(KoalaDoctor *Koala)
{
  this->next =  NULL;
  this->koala = Koala;
  this->list = this;
}

KoalaDoctorList::~KoalaDoctorList()
{
}

bool	KoalaDoctorList::isEnd()
{
  if (!this->next)
    return true;
  return false;
}

void	KoalaDoctorList::append(KoalaDoctorList *node)
{
  KoalaDoctorList	*tmp;

  tmp = this->list;
  while (tmp && tmp->next)
    tmp = tmp->next;
  tmp->next = node;
}

KoalaDoctorList   *KoalaDoctorList::remove(KoalaDoctorList *node)
{
  KoalaDoctorList	*tmp;
  KoalaDoctorList *prev;

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


KoalaDoctorList	*KoalaDoctorList::getFromName(std::string name)
{
  KoalaDoctorList *tmp;

  tmp = this->list;
  while (tmp && tmp->koala->getName() != name)
    tmp = tmp->next;
  if (tmp)
    return tmp;
  return NULL;
}

void	KoalaDoctorList::dump()
{
  KoalaDoctorList	*tmp;

  tmp = this->list;
  std::cout << "Liste des medecins : ";
  while (tmp)
    {
      if (!tmp->koala)
	std::cout << "[NULL]";
      else
	std::cout << tmp->koala->getName();
      tmp = tmp->next;
      if (tmp)
	std::cout << ", ";
    }
  std::cout << std::endl;
}

KoalaDoctorList   *KoalaDoctorList::getContent()
{
  return this->list;
}

KoalaDoctorList   *KoalaDoctorList::getNext()
{
  if (this->next)
    return this->next;
  return NULL;
}

KoalaDoctorList   *KoalaDoctorList::removeFromName(std::string name)
{
  KoalaDoctorList	*tmp;
  KoalaDoctorList	*prev;

  tmp = this->list;
  prev = this->list;
  while (tmp && tmp->koala && tmp->koala->getName() != name)
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
