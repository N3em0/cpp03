#include <iostream>

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

class ClapTrap
{
protected:
  int _HitPoints;
  int _EnergyPoints;
  int _AttackDamage;
  const std::string _Name;

public:
  ClapTrap();
  ClapTrap(ClapTrap const &src);
  ~ClapTrap();

  ClapTrap &operator=(ClapTrap const &rhs);

  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
};

#endif
