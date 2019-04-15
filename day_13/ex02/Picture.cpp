//
// Picture.cpp for ex00 in /home/armita_a/rendu/piscine_cpp_d13/ex00
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Mon Jan 19 09:19:46 2015 armita_a
// Last update Mon Jan 19 14:28:03 2015 armita_a
//

#include <fstream>
#include "Picture.h"
Picture::Picture() : data("")
{
}

Picture::~Picture()
{
}

Picture::Picture(const std::string& file)
{
  getPictureFromFile(file);
}


Picture::Picture(Picture &pic) :
  data(pic.data)
{
}

Picture	&Picture::operator=(Picture &pic)
{
  data = pic.data;
  return *this;
}

bool		Picture::getPictureFromFile(const std::string &path)
{
  std::ifstream file;
  char		c;

  file.open(path.data());
  if (!file.is_open())
    {
      this->data = std::string("ERROR");
      return false;
    }
  c = file.get();
  data.clear();
  while (file.good())
    {
      this->data.append(1, c);
      c = file.get();
    }
  file.close();
  return true;
}
