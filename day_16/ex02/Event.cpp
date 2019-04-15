//
// Event.cpp for ex02 in /home/armita_a/rendu/piscine_cpp_d16/ex02
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Thu Jan 22 13:54:43 2015 armita_a
// Last update Thu Jan 22 20:00:41 2015 armita_a
//

#include "Event.h"

Event:: Event() :
  _time(0)
{}

Event::Event(unsigned int time, const std::string &str) :
  _time(time),
  _event(str)
{}

Event::~Event(void)
{}

Event::Event(const Event&ev)  :
  _time(ev.getTime()),
  _event(ev.getEvent())
{
}

Event& Event::operator=(const Event&ev)
{
  _event =  ev.getEvent();
  _time = ev.getTime();
  return *this;
}

unsigned int Event::getTime(void) const
{
  return _time;
}

const std::string& Event::getEvent(void) const
{
  return _event;
}

void Event::setTime(unsigned int nb)
{
  _time = nb;
}

void	Event::setEvent(const std::string &str)
{
  _event = str;
}
