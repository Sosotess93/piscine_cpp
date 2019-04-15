//
// droidmemory.hh for ex01 in /home/armita_a/rendu/piscine_cpp_d08/ex01
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Wed Jan 14 17:16:52 2015 armita_a
// Last update Wed Jan 14 20:53:02 2015 armita_a
//

#ifndef DROIDMEMORY_HH
#define DROIDMEMORY_HH

#include <iostream>

class	DroidMemory
{
public:
  DroidMemory();
  ~DroidMemory();
  size_t	getFingerPrint() const;
  void		setFingerPrint(size_t nb);
  size_t	getExp() const;
  void		setExp(size_t nb);
  DroidMemory	&operator<<(DroidMemory &);
  DroidMemory	&operator>>(DroidMemory &);
  DroidMemory	&operator+=(DroidMemory &);
  DroidMemory	&operator+=(size_t);
  DroidMemory	operator+(DroidMemory &);
  DroidMemory	operator+(size_t);
private:
  size_t	FingerPrint;
  size_t	Exp;
};

std::ostream&	operator<<(std::ostream& os, DroidMemory &d);

#endif
