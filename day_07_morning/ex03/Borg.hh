//
// Federation.hh for ex00 in /home/armita_a/rendu/piscine_cpp_d07m/ex00
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Tue Jan 13 09:33:15 2015 armita_a
// Last update Tue Jan 13 16:36:07 2015 armita_a
//

#ifndef BORG_HH_
#define BORG_HH_

#include <string>
#include "Destination.hh"
#include "Warpsystem.hh"
#include "Federation.hh"

namespace Borg
{
  class		Ship
  {
  public:
    Ship(int frequecy, short repair = 3 );
    void	setupCore(WarpSystem::Core *core);
    void	checkCore();
    bool	move(int wrap, Destination d);
    bool	move(int wrap);
    bool	move(Destination d);
    bool	move();
    int		getShield();
    void	setShield(int);
    int		getWeaponFrequency();
    void	setWeaponFrequency(int);
    short	getRepair();
    void	setRepair(short);
    void	fire(Federation::Starfleet::Ship*);
    void	fire(Federation::Ship*);
    void	repair();
  private:
    int	_length;
    int	_width;
    std::string		_name;
    short		_maxWarp;
    WarpSystem::Core	 *Core;
    Destination		_location;
    Destination		_home;
    int			_weaponFrequecy;
    int			_shield;
    short		_repair;
  };
}

#endif
