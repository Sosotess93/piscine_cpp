//
// droid.hh for piscine_cpp_d08 in /home/armita_a/rendu/piscine_cpp_d08
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Wed Jan 14 11:06:58 2015 armita_a
// Last update Wed Jan 14 21:40:20 2015 armita_a
//

#ifndef DROID_HH
#define DROID_HH

#include <string>
#include "droidmemory.hh"

class Droid
{
public:
  Droid(std::string const serial = "");
  Droid(Droid const &d);
  ~Droid();
  Droid&	operator<<(size_t &nb);
  Droid		&operator=(Droid const &d);
  bool		operator!=(Droid const &d) const;
  bool		operator==(Droid const &d) const;
  void		setEnergy(size_t nb);
  size_t	getEnergy() const;
  size_t 	getAttack() const;
  size_t	getToughness() const;
  void		setStatus(std::string*);
  std::string  	*getStatus() const;
  std::string 	getId() const;
  void		setId(std::string);
  void		setBattleData(DroidMemory *);
  DroidMemory	*getBattleData();
  bool		operator()(std::string const *, size_t);

    private:
  std::string	Id;
  std::string	*Status;
  size_t	Energy;
  size_t const 	Attack;
  size_t const	Toughness;
  DroidMemory	*BattleData;
};

std::ostream	&operator<<(std::ostream& os, Droid const &d);

#endif
