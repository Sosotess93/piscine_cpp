/*
** Parser.h for piscine_cpp_d16 in /home/armita_a/rendu/piscine_cpp_d16
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Thu Jan 22 10:39:36 2015 armita_a
** Last update Fri Jan 23 08:36:30 2015 armita_a
*/

#ifndef PARSER_H_
# define PARSER_H_

#include <stack>
#include <string>

class Parser
{
public:
  Parser();
  void	reset();
  void	feed(const std::string &);
  int	result() const;
private:
  std::stack<char>	_operators;
  std::stack<int>	_operands;
  int			_result;
  int			_oldresult;
  void			depli();
  int			getVal(std::string, unsigned int *);
};

#endif /* !PARSER_H_ */
