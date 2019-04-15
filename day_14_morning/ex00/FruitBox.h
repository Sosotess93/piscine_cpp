#ifndef FRUITBOX_H_
# define FRUITBOX_H_

#include "FruitNode.h"

class FruitBox
{
 public:
  FruitBox(int size);
  int		nbFruits() const;
  bool		putFruit(Fruit* f);
  Fruit*	pickFruit();
  FruitNode*	head() const;
 private:
  int		_nbmax;
  FruitNode	*_head;
};


#endif /* !FRUITBOX_H_ */
