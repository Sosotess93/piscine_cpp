
#include "Fruit.h"
#include "Banana.h"

Banana::Banana() : Fruit(5)
{
}

Banana::~Banana() {}

std::string	Banana::getName() const
{
  return "banana";
}
