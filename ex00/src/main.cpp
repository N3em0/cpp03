#include "ClapTrap.hpp"

int main()
{
  ClapTrap Clap("Clap");
  ClapTrap Anyone(Clap);

  Clap.attack("himself");
  Clap.takeDamage(5);
  Clap.beRepaired(5);
  Clap.attack("himself");
  Clap.takeDamage(5);
  Clap.attack("himself");
  Clap.takeDamage(5);
  Clap.attack("himself");
  Clap.takeDamage(5);

  ClapTrap Trap;

  Trap.attack("no one");
  Trap.takeDamage(5);
  Trap.beRepaired(5);
  Trap.attack("no one");
  Trap.takeDamage(5);
  Trap.attack("no one");
  Trap.takeDamage(5);
  Trap.attack("no one");
  Trap.takeDamage(5);

  Anyone.attack("someone");
  Anyone.takeDamage(5);
  Anyone.beRepaired(5);
  Anyone.attack("someone");
  Anyone.takeDamage(5);
  Anyone.attack("someone");
  Anyone.takeDamage(5);
  Anyone.attack("someone");
  Anyone.takeDamage(5);
  return (0);
}
