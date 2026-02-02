#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

class ScavTrap : public ClapTrap
{
private:

public:
  ScavTrap();
  ScavTrap(const std::string name);
  ScavTrap(ScavTrap const &src);
  ~ScavTrap();

  ScavTrap &operator=(ScavTrap const &rhs);

  // void takeDamage(unsigned int amount);
  // void beRepaired(unsigned int amount);
  
  void attack(const std::string &target);
  void guardGate();
};

#endif
