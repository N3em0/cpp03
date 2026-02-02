#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

class ScavTrap : public ClapTrap
{
public:
  ScavTrap();
  ScavTrap(const std::string name);
  ScavTrap(ScavTrap const &src);
  ~ScavTrap();

  ScavTrap &operator=(ScavTrap const &rhs);
  
  void attack(const std::string &target);
  void guardGate();
};

#endif
