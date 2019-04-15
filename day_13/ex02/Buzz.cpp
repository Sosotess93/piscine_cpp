

#include "Toy.h"
#include "Buzz.h"

Buzz::Buzz(std::string name) :
  Toy(Toy::WOODY, name, "buzz.txt")
{
}

Buzz::Buzz(std::string name, std::string filename) :
  Toy(Toy::WOODY, name, filename)
{
}
