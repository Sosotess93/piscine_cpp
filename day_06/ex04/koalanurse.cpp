//
// koalanurse.cpp for ex03 in /home/armita_a/rendu/piscine_cpp_d06/ex03
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Mon Jan 12 17:21:08 2015 armita_a
// Last update Mon Jan 12 19:57:34 2015 armita_a
//

#include <iostream>
#include <fstream>
#include "koalanurse.h"
#include "sickkoala.h"

KoalaNurse::KoalaNurse(int nb)
{
  this->id = nb;
  this->is_working = true;
}

KoalaNurse::~KoalaNurse()
{
  std::cout << "Nurse " << this->id << ": Enfin un peu de repos !" << std::endl;
}

void	KoalaNurse::giveDrug(std::string drug, SickKoala *koala)
{
  if (koala)
    koala->takeDrug(drug);
}


std::string	KoalaNurse::readReport(std::string report)
{
  std::ifstream file;
  std::string ret;
  char c;

  ret = "";
  file.open(report.data());
  if (file.is_open())
    {
      std::cout << "Nurse " << this->id << ": Kreog ! Il faut donner un ";
      c = file.get();
      while (file.good())
	{
	  ret.append((char const *)&c);
	  std::cout << c;
	  c = file.get();
	}
      ret.erase(ret.size() - 2, 2);
      std::cout << " a Mr." << report.erase(report.find(".report"), 7) << " !" << std::endl;
    }
  return ret;
}

void	KoalaNurse::timeCheck()
{
  if (this->is_working)
    {
      this->is_working = false;
      std::cout << "Nurse " << this->id << ": Je commence le travail !" << std::endl;
    }
  else
    {
      this->is_working = true;
      std::cout << "Nurse " << this->id << ": Je rentre dans ma foret d'eucalyptus !" << std::endl;
    }
}
