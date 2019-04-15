//
// droid.cpp for piscine_cpp_d08 in /home/armita_a/rendu/piscine_cpp_d08
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Wed Jan 14 11:06:43 2015 armita_a
// Last update Wed Jan 14 23:06:09 2015 armita_a
//

#include <iostream>
#include "droid.hh"
#include "droidmemory.hh"

Droid::Droid(std::string const serial): Id(serial),
					Status(new std::string("Standing by")),
					Energy(50),
					Attack(25),
					Toughness(15)
{
  std::cout << "Droid '" << Id << "' Activated" << std::endl;
}

Droid::~Droid()
{
  delete(this->Status);
  std::cout << "Droid '" << Id << "' Destroyed" << std::endl;
}

Droid::Droid(Droid const &droid) : Id(droid.Id),
				   Status(new std::string(*(droid.Status))),
				   Energy(droid.Energy),
				   Attack(25),
				   Toughness(15)
{
}

size_t	Droid::getEnergy() const
{
  return Energy;
}

void	Droid::setEnergy(size_t nb)
{
  Energy = nb;
}

size_t Droid::getAttack() const
{
  return Attack;
}

size_t Droid::getToughness() const
{
  return Toughness;
}

std::string	*Droid::getStatus() const
{
  return Status;
}
void 	Droid::setStatus(std::string *str)
{
  Status = str;
}

std::string Droid::getId() const
{
  return Id;
}

void	Droid::setId(std::string str)
{
  Id = str;
}

Droid	&Droid::operator<<(size_t &nb)
{
  int	tmp = 100 - Energy;
  if (tmp <= nb)
    {
      setEnergy(100);
      nb -= tmp;
    }
  else
    {
      setEnergy(nb + getEnergy());
      nb = 0;
    }
  return *this;
}

bool	Droid::operator==(Droid const &d) const
{
  return (getAttack() == d.getAttack()
	  && getEnergy() == d.getEnergy()
	  && *(getStatus()) == *(d.getStatus())
	  && getId() == d.getId());
}

bool	Droid::operator!=(Droid const &d) const
{
  return !operator==(d);
}

std::ostream&	operator<<(std::ostream& os, Droid const &d)
{
  os  << "Droid '" << d.getId() << "', " << *(d.getStatus()) << ", " << d.getEnergy();
  return os;
}

Droid		&Droid::operator=(Droid const &d)
{
  Id = d.getId();
  Energy = d.getEnergy();
  Status = d.getStatus();
  return *this;
}

void		Droid::setBattleData(DroidMemory *val)
{
  this->BattleData = val;
}

DroidMemory	*Droid::getBattleData()
{
  return BattleData;
}
