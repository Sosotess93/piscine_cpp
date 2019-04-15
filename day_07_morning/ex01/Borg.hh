//
// Federation.hh for ex00 in /home/armita_a/rendu/piscine_cpp_d07m/ex00
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Tue Jan 13 09:33:15 2015 armita_a
// Last update Tue Jan 13 11:53:06 2015 armita_a
//

#ifndef BORG_HH_
#define BORG_HH_

#include <string>
#include "Warpsystem.hh"

namespace Borg
{
  class		Ship
  {
  public:
    Ship();
    void	setupCore(WarpSystem::Core *core);
    void	checkCore();
  private:
    int	_length;
    int	_width;
    std::string		_name;
    short		_maxWarp;
    WarpSystem::Core	 *Core;
  };
}

#endif
