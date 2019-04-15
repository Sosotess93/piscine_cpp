//
// EventManager.cpp for ex02 in /home/armita_a/rendu/piscine_cpp_d16/ex02
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Thu Jan 22 13:51:43 2015 armita_a
// Last update Thu Jan 22 16:09:27 2015 armita_a
//

#include <iostream>
#include "EventManager.h"

EventManager::EventManager() : _time(0) {}

EventManager::~EventManager() {}

EventManager::EventManager(EventManager const &evenM)
{
  _list = evenM.getList();
  _time = 0;
}

EventManager& EventManager::operator=(EventManager const &evenM)
{
  _list = evenM.getList();
  return *this;
}

std::list<Event>  EventManager::getList() const
{
  return _list;
}


static bool  Mysort(Event one, Event dos)
{
  return one.getTime() < dos.getTime();
};

void	EventManager::addEvent(const Event&even)
{
  if (even.getTime() < _time)
    return;
    _list.push_back(even);
    _list.sort(Mysort);
}

void	EventManager::removeEventsAt(unsigned int nb)
{
  for (std::list<Event>::iterator it = _list.begin(); it != _list.end(); ++it)
    if (it->getTime() ==  nb)
      {
	it = _list.erase(it);
	it--;
      }
}

void	EventManager::dumpEvents(void) const
{
  for (std::list<Event>::const_iterator it = _list.begin(); it != _list.end(); ++it)
	std::cout << it->getTime() << ": " << it->getEvent() << std::endl;
}

void	EventManager::dumpEventAt(unsigned int nb) const
{
  for (std::list<Event>::const_iterator it = _list.begin(); it != _list.end(); ++it)
      if (it->getTime() ==  nb)
	std::cout << it->getTime() << ": " << it->getEvent() << std::endl;
}

void	EventManager::addTime(unsigned int nb)
{
  _time += nb;
  for (std::list<Event>::iterator it = _list.begin(); it != _list.end(); ++it)
      if (it->getTime() <=  _time)
	{
	  std::cout << it->getEvent() << std::endl;
	  it = _list.erase(it);
	  it--;
	}
}

void	EventManager::addEventList(std::list<Event> &New)
{
  for (std::list<Event>::iterator it = New.begin(); it != New.end(); ++it)
    if (it->getTime() > _time)
      addEvent(Event(it->getTime(), it->getEvent()));
}
