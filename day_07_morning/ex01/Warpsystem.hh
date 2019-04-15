//
// Warpsystem.hh for ex00 in /home/armita_a/rendu/piscine_cpp_d07m/ex00
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Tue Jan 13 09:33:46 2015 armita_a
// Last update Tue Jan 13 11:29:26 2015 armita_a
//

#ifndef WARPSYSTEM_HH_
#define WARPSYSTEM_HH_

namespace	WarpSystem
{
  class QuantumReactor
  {
  public :
    QuantumReactor();
    bool	isStable();
    void	setStability(bool stability);
  private :
    bool _stability;
  };

  class Core
  {
  public :
    Core(QuantumReactor *coreReactor);
    WarpSystem::QuantumReactor	*checkReactor();
  private:
    WarpSystem::QuantumReactor *_coreReactor;
  };
}

#endif
