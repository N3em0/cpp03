#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
  std::cout << "Default ScavTrap constructor called with parameters : "
            << this->_HitPoints << " Hit Points, " << this->_EnergyPoints
            << " Energy Points, " << this->_AttackDamage
            << " Attack Damage and named " << this->_Name << "." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
  *this = src;
  std::cout << "Copy ScravTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
  std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
  std::cout << this->_Name << " enter guardGate mode" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{

  if (this != &rhs)
  {
    this->_HitPoints = rhs._HitPoints;
    this->_EnergyPoints = rhs._EnergyPoints;
    this->_AttackDamage = rhs._AttackDamage;
  }
  return (*this);
}
