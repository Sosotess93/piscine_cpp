//
// Errors.cpp for ex00 in /home/armita_a/rendu/piscine_cpp_d14a/ex00
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Tue Jan 20 15:51:29 2015 armita_a
// Last update Wed Jan 21 09:02:07 2015 armita_a
//

#include <exception>
#include "Errors.hpp"

NasaError::NasaError(std::string const &message, std::string const &component) :
  _message(message),
  _component(component)
{}

MissionCriticalError::MissionCriticalError(std::string const &message, std::string const &component) :
  NasaError(message, component)
{}

NasaError::~NasaError() throw()
{}


LifeCriticalError::LifeCriticalError(std::string const &message, std::string const &component) :
  NasaError(message, component)
{}

UserError:: UserError(std::string const &message, std::string const &component) :
  NasaError(message, component)
{}

CommunicationError::CommunicationError(std::string const &message) :
  NasaError(message, "CommunicationDevice")
{}

std::string const &NasaError::getComponent() const
{
  return _component;
}
char const *NasaError::what() const throw()
{
  return _message.data();
}
