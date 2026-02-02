#include "ClapTrap.hpp"

int main()
{
  ClapTrap Theo("Theo");

  Theo.attack("himself");
  Theo.takeDamage(5);
  Theo.beRepaired(5);
  Theo.attack("himself");
  Theo.takeDamage(5);
  Theo.attack("himself");
  Theo.takeDamage(5);
  Theo.attack("himself");
  Theo.takeDamage(5);
  
  ClapTrap Erwann;

  Erwann.attack("himself");
  Erwann.takeDamage(5);
  Erwann.beRepaired(5);
  Erwann.attack("himself");
  Erwann.takeDamage(5);
  Erwann.attack("himself");
  Erwann.takeDamage(5);
  Erwann.attack("himself");
  Erwann.takeDamage(5);
  return (0);
}
