//
// Federation.hh for ex00 in /home/armita_a/rendu/piscine_cpp_d07m/ex00
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Tue Jan 13 09:33:15 2015 armita_a
// Last update Tue Jan 13 16:42:09 2015 armita_a
//

#ifndef FEDERATION_HH_
#define FEDERATION_HH_

#include <string>
#include "Warpsystem.hh"
//#include "Borg.hh"
#include "Destination.hh"

namespace Borg
{
  class Ship;
}

namespace Federation
{
  namespace Starfleet
  {
    class	Captain
    {
    public:
      Captain(std::string _name);
      void	setAge(int age);
      int	getAge();
      std::string	getName();
    private:
      std::string	_name;
      int		_age;
    };

    class	Ensign
    {
    public:
      Ensign(std::string name);
    private:
      std::string	_name;
    };

    class	Ship
    {
    public:
      Ship(int length, int width, std::string name, short maxWarp, int torpedo);
      Ship();
      void	setupCore(WarpSystem::Core *core);
      void	checkCore();
      void	promote(Federation::Starfleet::Captain *cap);
      bool	move(int wrap, Destination d);
      bool	move(int wrap);
      bool	move(Destination d);
      bool	move();
      int	getShield();
      int	getTorpedo();
      void	setShield(int);
      void	setTorpedo(int);
      void	fire(Borg::Ship*);
      void	fire(int torpedoes, Borg::Ship*);
    private:
      Federation::Starfleet::Captain	*_captain;
      int		_length;
      int		_width;
      std::string	_name;
      short		_maxWarp;
      WarpSystem::Core *Core;
      Destination		_location;
      Destination		_home;
      int	_shield;
      int	_photonTorpedo;
    };
  }
  class		Ship
  {
  public:
    Ship(int length, int width, std::string name);
    void	setupCore(WarpSystem::Core *core);
    void	checkCore();
    WarpSystem::Core	*getCore();
    bool	move(int wrap, Destination d);
    bool	move(int wrap);
    bool	move(Destination d);
    bool	move();
    int		getShield();
    void	setShield(int);
  private:
    int	_length;
    int	_width;
    std::string		_name;
    short		_maxWarp;
    WarpSystem::Core	 *Core;
    Destination		_location;
    Destination		_home;
    int	_shield;
  };
}

#endif
