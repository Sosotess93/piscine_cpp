//
// droidmemory.cpp for ex01 in /home/armita_a/rendu/piscine_cpp_d08/ex01
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Wed Jan 14 18:14:43 2015 armita_a
// Last update Wed Jan 14 22:24:28 2015 armita_a
//

#include <iostream>
#include <cstdlib>
#include "droidmemory.hh"

DroidMemory::DroidMemory()
{
  this->Exp = 0;
  this->FingerPrint = random();
}

DroidMemory::~DroidMemory()
{
}

size_t	DroidMemory::getFingerPrint() const
{
  return FingerPrint;
}

void	DroidMemory::setFingerPrint(size_t nb)
{
  FingerPrint = nb;
}

size_t	DroidMemory::getExp() const
{
  return Exp;
}

void	DroidMemory::setExp(size_t nb)
{
  Exp = nb;
}

DroidMemory&	DroidMemory::operator<<(DroidMemory &other)
{
  Exp += other.getExp();
  FingerPrint = FingerPrint ^ other.getFingerPrint();
  return *this;
}

DroidMemory&	DroidMemory::operator>>(DroidMemory &other)
{
  other.setExp(other.getExp() + getExp());
  other.setFingerPrint(other.getFingerPrint() ^ FingerPrint);
  return other;
}

DroidMemory&	DroidMemory::operator+=(DroidMemory &other)
{
  return operator<<(other);
}

DroidMemory&	DroidMemory::operator+=(size_t nb)
{
  Exp += nb;
  FingerPrint = FingerPrint ^ nb;
  return *this;
}

DroidMemory	DroidMemory::operator+(DroidMemory &other)
{
  DroidMemory	tmp;

  tmp.setExp(other.getExp() + this->getExp());
  tmp.setFingerPrint(this->getFingerPrint() ^ other.getFingerPrint());
  return tmp;
}

DroidMemory	DroidMemory::operator+(size_t nb)
{
  DroidMemory	tmp;

  tmp.setExp(nb + getExp());
  tmp.setFingerPrint(this->getFingerPrint() ^ nb);
  return tmp;
}

std::ostream&	operator<<(std::ostream& os, DroidMemory &d)
{
  os << "DroidMemory '" << d.getFingerPrint() << "', " << d.getExp();
  return os;
}

bool	DroidMemory::operator==(DroidMemory &d)
{
  return (Exp == d.getExp() && FingerPrint == d.getFingerPrint());
}

bool	DroidMemory::operator!=(DroidMemory &d)
{
  return !(Exp == d.getExp() && FingerPrint == d.getFingerPrint());
}

bool	DroidMemory::operator>(DroidMemory &d)
{
  return Exp > d.getExp();
}

bool	DroidMemory::operator>(size_t d)
{
  return Exp > d;
}

bool	DroidMemory::operator<(DroidMemory &d)
{
  return Exp < d.getExp();
}

bool	DroidMemory::operator<(size_t d)
{
  return Exp < d;
}

bool	DroidMemory::operator<=(DroidMemory &d)
{
  return Exp <= d.getExp();
}

bool	DroidMemory::operator<=(size_t d)
{
  return Exp <= d;
}

bool	DroidMemory::operator>=(DroidMemory &d)
{
  return Exp >= d.getExp();
}

bool	DroidMemory::operator>=(size_t d)
{
  return Exp >= d;
}
