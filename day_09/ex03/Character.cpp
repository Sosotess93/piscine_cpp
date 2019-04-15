//
// Character.cpp for ex00 in /home/armita_a/rendu/piscine_cpp_d09/ex00
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Thu Jan 15 11:12:30 2015 armita_a
// Last update Fri Jan 16 09:43:14 2015 armita_a
//

#include <string>
#include "Character.hh"

Character::Character(const std::string &newName, int level) : _name(new std::string(newName.data()))
{
  this->_lvl = level;
  this->_power = 100;
  this->_pv = 100;
  this->_agility = 5;
  this->_spirit = 5;
  this->_stamina = 5;
  this->_strength = 5;
  this->Range = Character::CLOSE;
  std::cout << *(_name) << " Created" << std::endl;
}

Character::Character(const std::string &newName, int level, int strength, int  stamina, int intelligence,
		     int spirit, int agility) : _name(new std::string(newName.data()))
{
  this->_lvl = level;
  this->_power = 100;
  this->_pv = 100;
  this->Range = Character::CLOSE;

  this->_strength = strength;
  this->_stamina = stamina;
  this->_intelligence = intelligence;
  this->_spirit = spirit;
  this->_agility = agility;
  std::cout << *(_name) << " Created" << std::endl;
}

const std::string &Character::getName() const
{
  return *(this->_name);
}

int		Character::getLvl() const
{
  return this->_lvl;
}

int		Character::getPv() const
{
  return this->_pv;
}

int		Character::getPower() const
{
  return this->_power;
}

static	bool CheckEnergy(int nb, Character *charac)
{
  if(charac->getPower() < nb)
    {
      std::cout << charac->getName() << " out of power" << std::endl;
      return false;
    }
  return true;
}

int		Character::CloseAttack()
{
  if (CheckEnergy(10, this) == false)
      return 0;
  _power -= 10;
  std::cout << *(this->_name) << " strikes with a wood stick" << std::endl;
  return 10 + _strength;
}

int		Character::RangeAttack()
{
  if (CheckEnergy(10, this) == false)
    return 0;
  _power -= 10;
  std::cout << *(this->_name) << " launches a stone" << std::endl;
  return 5 + _strength;
}

void		Character::Heal()
{
  if (_pv >= 50)
    _pv = 100;
  else
    _pv += 50;
  std::cout << *(this->_name) << " takes a potion" << std::endl;
}

void		Character::RestorePower()
{
  this->_power = 100;
  std::cout << *(this->_name) << " eats" << std::endl;
}

void		Character::TakeDamage(int _damage)
{
  if (this->_pv <= _damage)
    {
      _pv = 0;
      std::cout << *(this->_name) << " out of combat" << std::endl;
      return;
    }
  _pv -= _damage;
  std::cout << *(this->_name) << " takes " << _damage << " damage" << std::endl;
}
