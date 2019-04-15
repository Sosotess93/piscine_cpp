//
// ex06.hpp for ex06 in /home/armita_a/rendu/piscine_cpp_d15/ex06
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Wed Jan 21 18:18:54 2015 armita_a
// Last update Wed Jan 21 23:58:08 2015 armita_a
//

#ifndef EX06_HPP
#define EX06_HPP

#include <sstream>

template <typename T, typename U = T>
struct Tuple
{
  T	a;
  U	b;

  std::string	print(int nb)
  {
    std::ostringstream s;
    s << "int:" << nb;
    return s.str();
  }

  std::string	print(float nb)
  {
    std::ostringstream s;
    s << "float:" << nb << "f";
    return s.str();
  }

  std::string	print(std::string str)
  {
    std::ostringstream s;
    s << "string:\"" << str << "\"";
    return s.str();
  }

  template <typename V>
  std::string	print(V nb)
  {
    return std::string("???");
  }

  std::string	toString() const
  {
    return std::string("[TUPLE [" +  print(a) + "] [" + print(b) + "]");
  }
};



#endif
