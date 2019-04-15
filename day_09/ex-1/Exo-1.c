/*
** Exo-1.c for ex-1 in /home/armita_a/rendu/piscine_cpp_d09/ex-1
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Thu Jan 15 09:08:53 2015 armita_a
** Last update Thu Jan 15 11:06:41 2015 armita_a
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "Exo-1.h"

static void CthulhuInitializer(t_cthulhu* this)
{
  this->m_power = 42;
  printf("Building %s\n", this->name);
}

t_cthulhu*	NewCthulhu()
{
  t_cthulhu	*tmp;

  if (!(tmp = malloc(sizeof(t_cthulhu))) || !(tmp->name = malloc(sizeof(8))))
    return NULL;
  tmp->name[0] = '\0';
  tmp->name = strcat(tmp->name, "Cthulhu");
  printf("----\n");
  CthulhuInitializer(tmp);
  return tmp;
}

void		PrintPower(t_cthulhu* this)
{
  if (this)
    printf("Power => %d\n", this->m_power);
}

void		Attack(t_cthulhu* this)
{
  if (!this)
    return;
  else if (this->m_power >= 42)
    {
      printf("%s attacks and destroys the city\n", this->name);
      this->m_power -= 42;
    }
  else
    printf("%s can't attack, he doesn't have enough power\n", this->name);
}

void		Sleeping(t_cthulhu* this)
{
  if (!this)
    return ;
  this->m_power += 42000;
  printf("%s sleeps\n", this->name);
}

static void KoalaInitializer(t_koala* this, char* _name, char _isALegend)
{
  if (!(this->m_parent.name = malloc(sizeof(char) *  (strlen(_name) + 1))))
    return ;
  this->m_parent.name[0] = '\0';
  this->m_parent.name = strcat(this->m_parent.name, _name);
  printf("Building %s\n", "Cthulhu");
  CthulhuInitializer(&this->m_parent);
  if (_isALegend == 0)
    this->m_parent.m_power = 0;
}


t_koala*	NewKoala(char* name, char _isALegend)
{
  t_koala	*tmp;

  if (!name || !(tmp = malloc(sizeof(t_koala))))
    return NULL;
  tmp->m_isALegend = _isALegend;
  printf("----\n");
  KoalaInitializer(tmp, name, _isALegend);
  return tmp;
}

void		Eat(t_koala *this)
{
  if (!this)
    return;
  printf("%s eats\n", this->m_parent.name);
  this->m_parent.m_power += 42;
}
