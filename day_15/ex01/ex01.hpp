
#ifndef EX01_HPP
#define EX01_HPP

#include <cstring>

template<typename T>
int	compare(T const &a, T const &b)
{
  if (a == b)
    return 0;
  if (a >b)
    return 1;
  return -1;
}

#include <iostream>

template<>
int	compare<const char *>(const char * const  & a, const char * const &b)
{
  int index =  strcmp(a, b);

  if (index < 0)
    return -1;
  if (index > 0)
    return 1;
  return 0;
}

#endif
