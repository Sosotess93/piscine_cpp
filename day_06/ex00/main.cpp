//
// main.cpp for ex00 in /home/armita_a/rendu/piscine_cpp_d06/ex00
//
// Made by armita_a
// Login   <armita_a@epitech.net>
//
// Started on  Mon Jan 12 09:23:36 2015 armita_a
// Last update Tue Jan 13 00:15:26 2015 armita_a
//

#include <iostream>
#include <fstream>

int	main(int ac, char **av)
{
  if (ac == 1)
    {
      std::cerr << "my_cat: Usage : ./my_cat file [...]"  << std::endl;
      return 1;
    }

  int index = 1;
  char c;
  while (index < ac)
    {
      std::ifstream file;
      file.open(av[index]);
      if (file.is_open())
	{
	  c = file.get();
	  while (file.good())
	    {
	      std::cout << c;
	      c = file.get();
	    }
	}
      else
	std::cerr << "my_cat: <file>: No such file or director"  << std::endl;
      file.close();
      index++;
    }
  return 0;
}
