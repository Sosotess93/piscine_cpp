//
// Federation.hh for ex00 in /home/armita_a/rendu/piscine_cpp_d07m/ex00
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Tue Jan 13 09:33:15 2015 armita_a
// Last update Tue Jan 13 12:30:16 2015 armita_a
//

#ifndef FEDERATION_HH_
#define FEDERATION_HH_

#include <string>
#include "Warpsystem.hh"

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
      Ship(int length, int width, std::string name, short maxWarp);
      void	setupCore(WarpSystem::Core *core);
      void	checkCore();
      void	promote(Federation::Starfleet::Captain *cap);
    private:
      Federation::Starfleet::Captain	*_captain;
      int		_length;
      int		_width;
      std::string	_name;
      short		_maxWarp;
      WarpSystem::Core *Core;
    };
  }
  class		Ship
  {
  public:
    Ship(int length, int width, std::string name);
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
