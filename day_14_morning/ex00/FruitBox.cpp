
#include "FruitBox.h"

FruitBox::FruitBox(int size)
{
  if (size < 0)
    size = 0;
  _nbmax =  size;
  _head = NULL;
}

int		FruitBox::nbFruits() const
{
  FruitNode	*tmp;
  int		index = 0;

  tmp = _head;
  while (tmp)
    {
      tmp = tmp->next;
      ++index;
    }
  return index;
}

bool		FruitBox::putFruit(Fruit* f)
{
  FruitNode	*tmp;
  int		index = 0;
  if (!_head)
    {
      if ( _nbmax <= index)
	return false;
      _head = new FruitNode;
      _head->data = f;
      _head->next = NULL;
      return true;
    }
  ++index;
  tmp = _head;
  while (tmp->next && tmp->data != f)
    {
      tmp = tmp->next;
      ++index;
    }
  if (!tmp || tmp->data == f || _nbmax <= index)
    return false;
  tmp->next = new FruitNode;
  tmp->next->data = f;
  tmp->next->next = NULL;
  return true;
}

Fruit*		FruitBox::pickFruit()
{
  Fruit		*ret;

  if (_head == NULL)
    return NULL;
  ret = _head->data;
  _head = _head->next;
  return ret;
}

FruitNode*	FruitBox::head() const
{
  return _head;
}
