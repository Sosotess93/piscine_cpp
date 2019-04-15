/*
** main.c for ex01 in /home/armita_a/rendu/piscine_cpp_d06/ex01
**
** Made by armita_a
** Login   <armita_a@epitech.net>
**
** Started on  Mon Jan 12 11:00:54 2015 armita_a
// Last update Mon Jan 12 14:22:17 2015 armita_a
*/

#include <string>
#include <iostream>
#include <iomanip>

int	main()
{
  std::string type;
  double val;
  double res;

  std::cin >> val;
  std::cin >> type;

  if (type == "Celsius")
    {
      res = 9.0 /5.0 * val + 32;
      std::cout << std::setw(16) << std::right << std::fixed << std::setprecision(3) << res << std::setw(16) << "Fahrenheit" << std::endl;
    }
  else if (type == "Fahrenheit")
    {
      res  = 5.0 /9.0 * (val - 32);
      std::cout << std::setw(16) << std::right << std::fixed << std::setprecision(3) << res << std::setw(16) << "Celsius" << std::endl;
    }
 return 1;
}
