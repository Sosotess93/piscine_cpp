
#include <iostream>
#include "droid.hh"

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
  Energy += tmp;
  nb -= tmp;
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
