#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
  ClapTrap Theo("ClapTrap");
  ScavTrap Erwann("ScavTrap");
  FragTrap Yves("FragTrap");

  Theo.attack("himself");
  Theo.takeDamage(5);
  Theo.beRepaired(5);
  Theo.attack("himself");
  Theo.takeDamage(5);
  Theo.attack("himself");
  Theo.takeDamage(5);
  Theo.attack("himself");
  Theo.takeDamage(5);
  Erwann.attack("the air");
  Erwann.takeDamage(5);
  Erwann.beRepaired(5);
  Erwann.guardGate();
  Erwann.attack("the air");
  Erwann.takeDamage(5);
  Erwann.attack("the air");
  Erwann.takeDamage(5);
  Erwann.attack("the air");
  Erwann.takeDamage(5);
  Yves.attack("the whole room");
  Yves.takeDamage(5);
  Yves.beRepaired(5);
  Yves.highFivesGuys();
  Yves.attack("the whole room");
  Yves.takeDamage(5);
  Yves.attack("the whole room");
  Yves.takeDamage(5);
  Yves.attack("the whole room");
  Yves.takeDamage(5);
  return (0);
}

