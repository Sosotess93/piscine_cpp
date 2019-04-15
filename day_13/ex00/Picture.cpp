
#include <fstream>
#include "Picture.h"
Picture::Picture() : data("")
{
}

Picture::Picture(const std::string& file)
{
  getPictureFromFile(file);
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
