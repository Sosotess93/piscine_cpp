/*
** Exo-1.h for ex-1 in /home/armita_a/rendu/piscine_cpp_d09/ex-1
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Thu Jan 15 09:08:53 2015 armita_a
** Last update Thu Jan 15 10:28:20 2015 armita_a
*/

#ifndef EXO_1_H_
# define EXO_1_H_

typedef struct	s_cthulhu
{
  int		m_power;
  char		*name;

}		t_cthulhu;

t_cthulhu*	NewCthulhu();
void		PrintPower(t_cthulhu* this);
void		Attack(t_cthulhu* this);
void		Sleeping(t_cthulhu* this);

typedef struct	s_koala
{
  t_cthulhu	m_parent;
  char		m_isALegend;
}		t_koala;

t_koala*	NewKoala(char* name, char _isALegend);
void		Eat(t_koala *this);

#endif /* !EXO-1_H_ */
