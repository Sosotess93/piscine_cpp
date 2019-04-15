
#ifndef FRUIT_H_
# define FRUIT_H_

#include <string>

class Fruit
{
 public:
  Fruit();
  Fruit(int);
  ~Fruit();
  virtual std::string	getName() const = 0;
  int			getVitamins();
protected:
  int		_vitamins;
};

#endif /* !FRUIT_H_ */
