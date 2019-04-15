//
// koaladoctor.cpp for ex04 in /home/armita_a/rendu/piscine_cpp_d06/ex04
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Mon Jan 12 19:25:54 2015 armita_a
// Last update Mon Jan 12 21:13:38 2015 armita_a
//

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "koaladoctor.h"

KoalaDoctor::KoalaDoctor(std::string name)
{
  this->name = name;
  std::cout << "Dr." << name << ": Je suis le Dr." << name << " ! Comment Kreoggez-vous ?" << std::endl;
  this->is_working = true;
}

KoalaDoctor::~KoalaDoctor()
{
}

void	KoalaDoctor::diagnose(SickKoala *koala)
{
  if (!koala)
    return;
  std::cout << "Dr." << this->name << ": Alors qu’est-ce qui vous goerk Mr." << koala->getName() << " ?" << std::endl;
  koala->poke();

  int rand = random() % 5;
  std::string tab[5]= { "mars", "Buronzand" ,"Viagra","Extasy","Feuille d’eucalyptus" };
  std::ofstream file(koala->getName().append((char *)".report", 7).data(),std::ofstream::binary);
  file << tab[rand];
  file.close();
}

void	KoalaDoctor::timeCheck()
{
  if (this->is_working)
    {
      this->is_working = false;
      std::cout << "Dr. " << this->name << ": Je commence le travail !" << std::endl;
    }
  else
    {
      this->is_working = true;
      std::cout << "Dr. " << this->name << ": Je rentre dans ma foret d'eucalyptus !" << std::endl;
    }
}
