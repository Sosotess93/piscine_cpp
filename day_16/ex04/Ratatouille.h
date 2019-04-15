/*
** Ratatouille.h for ex04 in /home/armita_a/rendu/piscine_cpp_d16/ex04
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Thu Jan 22 17:32:56 2015 armita_a
// Last update Thu Jan 22 17:48:00 2015 armita_a
*/

#ifndef RATATOUILLE_H_
# define RATATOUILLE_H_

# include <sstream>

class Ratatouille
{
public :
  Ratatouille();
  Ratatouille(Ratatouille const &);
  ~Ratatouille();
  Ratatouille &operator=(const Ratatouille &);
  Ratatouille &addVegetable(unsigned char);
  Ratatouille &addCondiment(unsigned int);
  Ratatouille &addSpice(double);
  Ratatouille &addSauce(const std::string &);
  std::string kooc(void);
  std::string getName() const;
private:
  std::ostringstream _name;
};

#endif /* !RATATOUILLE_H_ */
