#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
  ClapTrap Theo("Theo");
  ScavTrap Erwann("Coucou");

  Theo.attack("himself");
  Erwann.attack("caca");
  Theo.takeDamage(5);
  Erwann.guardGate();
  Erwann.takeDamage(5);
  Theo.beRepaired(5);
  Erwann.beRepaired(5);
  Theo.attack("himself");
  Theo.takeDamage(5);
  Theo.attack("himself");
  Theo.takeDamage(5);
  Theo.attack("himself");
  Theo.takeDamage(5);
  return (0);
}

