#include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

class FragTrap : public ClapTrap
{
public:
  FragTrap();
  FragTrap(const std::string name);
  FragTrap(FragTrap const &src);
  ~FragTrap();

  FragTrap &operator=(FragTrap const &rhs);
  
  void attack(const std::string &target);
  void highFivesGuys();
};

#endif
