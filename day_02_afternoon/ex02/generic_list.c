/*
** generic_list.c for ex02 in /home/armita_a/rendu/piscine_cpp_d02a/ex02
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Thu Jan  8 21:36:44 2015 armita_a
** Last update Fri Jan  9 08:41:23 2015 armita_a
*/

#include <stdlib.h>
#include "generic_list.h"

unsigned int    list_get_size(t_list list)
{
  unsigned int  index = 0;

  while (list)
    {
      list = list->next;
      index++;
    }
  return (index);
}

t_bool    list_is_empty(t_list list)
{
  if (!list)
    return TRUE;
  return FALSE;
}

t_bool list_add_elem_at_front(t_list *front_ptr, void *elem)
{
  t_list new_elem;
  if (!(new_elem = malloc(sizeof(t_node))))
    return FALSE;
  new_elem->value = elem;
  new_elem->next = *front_ptr;
  *front_ptr = new_elem;
  return TRUE;
}

t_bool list_add_elem_at_back(t_list *front_ptr, void *elem)
{
  t_list    new_elem;
  t_list    temp;

  temp = *front_ptr;
  while (temp && temp->next)
    temp = temp->next;
  if (!(new_elem = malloc(sizeof(t_node))))
    return FALSE;
  new_elem->value = elem;
  if (!temp)
    *front_ptr = new_elem;
  else
    temp->next = new_elem;
  new_elem->next = NULL;
  return TRUE;
}

t_bool list_add_elem_at_position(t_list *front_ptr, void *elem,
				 unsigned int position)
{
  t_list        new_elem;
  t_list        temp;

  temp = *front_ptr;
  if (!temp)
    return FALSE;
  if (!(new_elem = malloc((sizeof(t_node)))))
    return FALSE;
  new_elem->value = elem;
  if (position == 0)
    return (list_add_elem_at_front(front_ptr, elem));
  while (position > 0)
    {
      if (position == 1)
        {
          new_elem->next = temp->next;
          temp->next = new_elem;
        }
      temp = temp->next;
      position--;
    }
  return TRUE;
}

t_bool list_del_elem_at_front(t_list *front_ptr)
{
  t_list    temp;

  temp = *front_ptr;
  if (!temp)
    return FALSE;
  *front_ptr = temp->next;
  free(temp);
  return TRUE;
}

t_bool list_del_elem_at_back(t_list *front_ptr)
{
  t_list    del = NULL;
  t_list    temp;

  temp = *front_ptr;
  if (!temp)
    return FALSE;
  while (temp->next)
    {
      del = temp;
      temp = temp->next;
    }
  if (!del)
    *front_ptr = del;
  else
    del->next = NULL;
  free(temp);
  return TRUE;
}

t_bool          list_del_elem_at_position(t_list *front_ptr, unsigned int position)
{
  t_list    temp;
  t_list    del = NULL;

  temp = *front_ptr;
  if (position == 0)
    {
      list_del_elem_at_front(front_ptr);
      return TRUE;
    }
  while (position  > 0&& temp)
    {
      del = temp;
      temp = temp->next;
      position--;
    }
  if (temp)
    return FALSE;
  else
    del->next = temp->next;
  return TRUE;
}

void list_clear(t_list *front_ptr)
{
   t_list temp;

   while (*front_ptr)
    {
      temp = *front_ptr;
      *front_ptr = (*front_ptr)->next;
      free(temp);
    }
   *front_ptr = NULL;
}

void  *list_get_elem_at_front(t_list list)
{
  if (list)
    return (list->value);
  return 0;
}

void         *list_get_elem_at_back(t_list list)
{
  t_list    temp = list;

  if (list)
    {
      while (temp->next)
	temp = temp->next;
      return (temp->value);
    }
  else
    return 0;
}

void *list_get_elem_at_position(t_list list, unsigned int position)
{
  unsigned int  i;
  t_list        tmp;

  if (list == NULL)
    return (0);
  tmp = list;
  i = 0;
  while (i != position)
    {
      if (tmp->next == NULL)
        return (0);
      tmp = tmp->next;
      i++;
    }
  return (tmp->value);
}

void list_dump(t_list list, t_value_displayer val_disp)
{
  while (list)
    {
      val_disp(list->value);
      list = list->next;
    }
}

t_node *list_get_first_node_with_value(t_list list, void *value,  t_value_comparator val_comp)
{
  while (list)
    {
      if (val_comp(value, list->value) == 0)
	return ((t_node*)list);
      list = list->next;
    }
  return NULL;
}
