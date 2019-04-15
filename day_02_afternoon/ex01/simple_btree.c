/*
** simple_btree.c for ex01 in /home/armita_a/rendu/piscine_cpp_d02a/ex01
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Thu Jan  8 19:37:35 2015 armita_a
** Last update Fri Jan  9 08:47:17 2015 armita_a
*/

#include <stdlib.h>
#include "simple_btree.h"

t_bool	btree_is_empty(t_tree tree)
{
  if (tree)
    return TRUE;
  return FALSE;
}

unsigned int	btree_get_size(t_tree tree)
{
  if (!tree)
    return 0;
  return (unsigned int)(btree_get_size(tree->left)
			+ btree_get_size(tree->right) +1);
}

unsigned int	btree_get_depth(t_tree tree)
{
  unsigned int	left;
  unsigned int	right;

  if(!tree)
    return 0;
  right = btree_get_depth(tree->right);
  left = btree_get_depth(tree->left);
  if (left > right)
    return left + 1;
  return right + 1;
}


t_bool btree_create_node(t_tree *node_ptr, double value)
{
  t_tree    new_elem;

  if (!(new_elem = malloc(sizeof(t_node))))
    return FALSE;
  new_elem->value = value;
  new_elem->right = NULL;
  new_elem->left = NULL;

  *node_ptr = new_elem;
  return TRUE;
}

t_bool btree_delete(t_tree *root_ptr)
{
  t_tree	elem;

  elem = *root_ptr;
  if (!root_ptr)
    return FALSE;
  btree_delete(&elem->left);
  btree_delete(&elem->right);
  free(root_ptr);
  return TRUE;
}

double btree_get_max_value(t_tree tree)
{
  double right;
  double left;

  if (!tree)
    return 0;
  right = btree_get_max_value(tree->right);
  left = btree_get_max_value(tree->left);
  if (tree->value > right && tree->value > left)
    return (tree->value);
  else if (left > right)
    return (left);
  return (right);
}

double btree_get_min_value(t_tree tree)
{
  double right;
  double left;

  if (!tree)
    return 0;
  right = btree_get_max_value(tree->right);
  left = btree_get_max_value(tree->left);
  if (tree->value < right && tree->value < left)
    return (tree->value);
  else if (left < right)
    return (left);
  return (right);
}
