//
// Federation.hh for ex00 in /home/armita_a/rendu/piscine_cpp_d07m/ex00
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Tue Jan 13 09:33:15 2015 armita_a
// Last update Tue Jan 13 13:57:56 2015 armita_a
//

#ifndef BORG_HH_
#define BORG_HH_

#include <string>
#include "Destination.hh"
#include "Warpsystem.hh"

namespace Borg
{
  class		Ship
  {
  public:
    Ship();
    void	setupCore(WarpSystem::Core *core);
    void	checkCore();
    bool	move(int wrap, Destination d);
    bool	move(int wrap);
    bool	move(Destination d);
    bool	move();
  private:
    int	_length;
    int	_width;
    std::string		_name;
    short		_maxWarp;
    WarpSystem::Core	 *Core;
    Destination		_location;
    Destination		_home;
  };
}

#endif
