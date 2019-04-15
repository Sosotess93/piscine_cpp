
#ifndef FRUITNODE_H_
# define FRUITNODE_H_

#include "Fruit.h"

typedef struct FruitNode
{
  Fruit		*data;
  FruitNode	*next;
}		FruitNode;

#endif /* !FRUITNODE_H_ */
