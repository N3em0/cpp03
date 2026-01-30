#include "ClapTrap.hpp"

int main()
{
  ClapTrap Theo;

  Theo.attack("himself");
  Theo.takeDamage(5);
  Theo.beRepaired(5);
  Theo.attack("himself");
  Theo.takeDamage(5);
  Theo.attack("himself");
  Theo.takeDamage(5);
  Theo.attack("himself");
  Theo.takeDamage(5);
  return (0);
}
