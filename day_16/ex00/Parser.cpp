XSXC//
// Parser.cpp for piscine_cpp_d16 in /home/armita_a/rendu/piscine_cpp_d16
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Thu Jan 22 10:39:36 2015 armita_a
// Last update Thu Jan 21 19:02:45 2016 Sofiane Charrad
//

#include <cstdlib>
#include "Parser.h"

Parser::Parser()
{
  _result = 0;
  _oldresult = 0;
}


int	Parser::getVal(std::string str, unsigned int *index)
{
  int		val;
  std::string	c;

  c = str.at(*index);
  val = atoi(c.data());
  (*index)++;
  while (*index < str.size() && str.at(*index) >= '0' && str.at(*index) <= '9')
    {
      c = str.at(*index);
      val *= 10;
      val += atoi(c.data());
      (*index)++;
    }
  (*index)--;
  return val;
}

void	Parser::depli()
{
  if (_operands.empty())
    return ;
  int val1 = _operands.top();
  int val2 = 0;
  char c = _operators.top();

  _operators.pop();
  _operands.pop();
  if (!_operands.empty())
  {
    val2 = _operands.top();
    _operands.pop();
  }
  if (c == '*' && val2 != 0)
    _result += val1 * val2;
  else if (c == '*')
    _result *= val1;


  else if (c == '+')
    _result += val1 + val2;
  else if (c == '-')
    _result += val2 - val1;
  else if (c == '/' && val2 != 0)
    _result += val2 / val1;
  else if (c == '/')
    _result /= val1;

  else if (c == '%' && val2 != 0)
    _result += val2 % val1;
  else if (c == '%')
    _result %= val1;


}

void	Parser::feed(const std::string &str)
{
  _oldresult = _result;
  _result = 0;
  unsigned int	index = 0;
  std::string	c;

  while (index < str.size())
    {
      while (index < str.size() && str[index] != ')')
	{
	    c = str.at(index);
	    if (atoi(c.data()) != 0)
	    _operands.push(getVal(str, &index));
	    else if (str.at(index) != ' ' && str.at(index) != '(' && str.at(index) != ')')
	      _operators.push(str.at(index));
	  index++;
	}
      depli();
      index++;
    }
}

int	Parser::result() const
{
  return _result + _oldresult;
}

void	Parser::reset()
{
  _oldresult = 0;
  _result = 0;
}
