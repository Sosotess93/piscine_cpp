
#include "Fruit.h"

Fruit::Fruit()
{}

Fruit::Fruit(int val)
{
  _vitamins = val;
}

Fruit::~Fruit()
{}

int	Fruit::getVitamins()
{
  return _vitamins;
}
