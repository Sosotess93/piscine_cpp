//
// Warpsystem.cpp for ex00 in /home/armita_a/rendu/piscine_cpp_d07m/ex00
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Tue Jan 13 09:35:32 2015 armita_a
// Last update Tue Jan 13 11:36:00 2015 armita_a
//

#include "Warpsystem.hh"

WarpSystem::QuantumReactor::QuantumReactor()
{
  this->_stability  = true;
}

bool	WarpSystem::QuantumReactor::isStable()
{
  return this->_stability;
}

void	WarpSystem::QuantumReactor::setStability(bool stability)
{
  this->_stability = stability;
}

WarpSystem::Core::Core(QuantumReactor *coreReactor)
{
  this->_coreReactor = coreReactor;
}

WarpSystem::QuantumReactor	*WarpSystem::Core::checkReactor()
{
  return this->_coreReactor;
}
