/*
** stack.c for ex03 in /home/armita_a/rendu/piscine_cpp_d02a/ex03
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Fri Jan  9 08:17:22 2015 armita_a
** Last update Fri Jan  9 08:53:01 2015 armita_a
*/

#include "stack.h"
#include "generic_list.h"

unsigned int stack_get_size(t_stack stack)
{
  return list_get_size((t_list)stack);
}

t_bool stack_is_empty(t_stack stack)
{
  return list_is_empty((t_list)stack);
}

t_bool stack_push(t_stack *stack_ptr, void *elem)
{
  return list_add_elem_at_front((t_list *)stack_ptr, elem);
}

t_bool stack_pop(t_stack *stack_ptr)
{
  return list_del_elem_at_front((t_list *)stack_ptr);
}

void *stack_top(t_stack stack)
{
  return list_get_elem_at_front((t_list) stack);
}
