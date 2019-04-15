//
// ex05.hpp for ex05 in /home/armita_a/rendu/piscine_cpp_d15/ex05
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Wed Jan 21 15:14:30 2015 armita_a
// Last update Thu Jan 22 00:26:09 2015 armita_a
//

#ifndef EX05_HPP
#define EX05_HPP

#include <iostream>
#include <exception>

template<class T> class array
{
public:

  T*	getArray() const {return _array;}

  array() : _array(new T), _size(0) { }

  array(unsigned int nb) : _array(new T[nb]), _size(nb) { }

  array(array const &other) : _array(other.getArray()), _size(other.size()) { }

  array		operator=(array const &other)
  {
    _size = other.size();
    unsigned int	index = 0;
    _array = new T[_size];
    while (index < _size)
      _array[index] = other[index++];
    return *this;
  }

  T		&operator[](const unsigned int val) const
  {
    if ( val >= _size)
      throw new std::exception();
    return _array[val];
  }

  T		&operator[](const unsigned int val)
  {
    if (val < _size)
      return _array[val];

    T *tmp = new T[val];
    unsigned int index  = 0;
    while (index < _size)
	tmp[index] = _array[index++];
    delete(_array);
    _array = tmp;
    _size = val + 1;
    return (_array[val]);
  }

  unsigned int size() const
  {
    return _size;
  }

  void		dump() const
  {
    int	index = 0;

    std::cout << "[" ;
    while (index < _size)
      {
	std::cout << _array[index];
	if (++index < _size)
	  std::cout  << ", ";
      }
    std::cout << "]" << std::endl;
  }

  template <typename U>
  array<U>		convertTo(U (*funct)(const T&))
  {
    unsigned int	index = 0;
    array<U>		tmp;

    tmp = array<U>(_size);
    while (index < _size)
      tmp[index] = funct(_array[index++]);
    return tmp;
  }

private:
  unsigned int	_size;
  T		*_array;
};

template<>
void	       array<bool>::dump() const
{
  unsigned int	index = 0;

    std::cout << "[" ;
    while (index < _size)
      {
	if (_array[index])
	  std::cout << "true";
	else
	  std::cout << "false";
	if (++index < _size)
	  std::cout  << ", ";
      }
    std::cout << "]" << std::endl;
}

#endif
