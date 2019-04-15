/*
** EventManager.h for ex02 in /home/armita_a/rendu/piscine_cpp_d16/ex02
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Thu Jan 22 13:51:57 2015 armita_a
// Last update Thu Jan 22 16:10:29 2015 armita_a
*/

#ifndef EVENTMANAGER_H_
# define EVENTMANAGER_H_

# include <list>
# include "Event.h"

class EventManager
{
 public:
  EventManager();
  ~EventManager();
  EventManager(EventManager const &);
  EventManager&		operator=(EventManager const &);
  void			addEvent(const Event&);
  void			removeEventsAt(unsigned int);
  void			dumpEvents(void) const;
  void			dumpEventAt(unsigned int) const;
  void			addTime(unsigned int);
  void			addEventList(std::list<Event>&);
  std::list<Event>	getList() const;
 private:

  std::list<Event>	_list;
  unsigned int		_time;
};

#endif /* !EVENTMANAGER_H_ */
