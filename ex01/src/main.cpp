#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
  ClapTrap Clap("Clap");
  ScavTrap Scav("Scav");

  Clap.attack("himself");
  Clap.takeDamage(5);
  Clap.beRepaired(5);
  Clap.attack("himself");
  Clap.takeDamage(5);
  Clap.attack("himself");
  Clap.takeDamage(5);
  Clap.attack("himself");
  Clap.takeDamage(5);
  Scav.attack("the air");
  Scav.takeDamage(5);
  Scav.beRepaired(5);
  Scav.guardGate();
  Scav.attack("the air");
  Scav.takeDamage(5);
  Scav.attack("the air");
  Scav.takeDamage(5);
  Scav.attack("the air");
  Scav.takeDamage(5);
  return (0);
}
