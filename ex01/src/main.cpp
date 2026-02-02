#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
  ClapTrap Theo;
  ScavTrap Erwann;

  Theo.attack("himself");
  Erwann.attack("caca");
  Theo.takeDamage(5);
  Erwann.takeDamage(5);
  Theo.beRepaired(5);
  Theo.attack("himself");
  Theo.takeDamage(5);
  Theo.attack("himself");
  Theo.takeDamage(5);
  Theo.attack("himself");
  Theo.takeDamage(5);
  return (0);
}

