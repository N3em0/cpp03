#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
  ClapTrap Clap("ClapTrap");
  ScavTrap Scav("ScavTrap");
  FragTrap Frag("FragTrap");

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
  Frag.attack("the target");
  Frag.takeDamage(5);
  Frag.beRepaired(5);
  Frag.highFivesGuys();
  Frag.attack("the target");
  Frag.takeDamage(5);
  Frag.attack("the target");
  Frag.takeDamage(5);
  Frag.attack("the target");
  Frag.takeDamage(5);
  return (0);
}
