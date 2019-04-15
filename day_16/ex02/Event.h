/*
** Event.h for ex02 in /home/armita_a/rendu/piscine_cpp_d16/ex02
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Thu Jan 22 13:51:56 2015 armita_a
** Last update Thu Jan 22 17:06:42 2015 armita_a
*/

#ifndef EVENT_H_
# define EVENT_H_

# include <string>

class Event
{
public:
  Event(void);
  Event(unsigned int, const std::string&);
  ~Event(void);
  Event(const Event&);
  Event& operator=(const Event&);

  unsigned int getTime(void) const;
  const std::string& getEvent(void) const;
  void	setTime(unsigned int);
  void	setEvent(const std::string &);

private:
  unsigned int	_time;
  std::string	_event;
};


#endif /* !EVENT_H_ */
