#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
  this->_HitPoints = 100;
  this->_EnergyPoints = 50;
  this->_AttackDamage = 20;
  std::cout << "Default ScavTrap constructor called. " << this->_HitPoints
            << " Hit Points, " << this->_EnergyPoints << " Energy Points, "
            << this->_AttackDamage << " Attack Damage and named " << this->_Name
            << "." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
  if (this != &src)
  {
    this->_HitPoints = src._HitPoints;
    this->_EnergyPoints = src._EnergyPoints;
    this->_AttackDamage = src._AttackDamage;
  }
  std::cout << "Copy ScravTrap constructor called. " << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
  this->_HitPoints = 100;
  this->_EnergyPoints = 50;
  this->_AttackDamage = 20;
  std::cout << "ScavTrap constructor with name parameter called. "
            << this->_HitPoints << " Hit Points, " << this->_EnergyPoints
            << " Energy Points, " << this->_AttackDamage
            << " Attack Damage and named " << this->_Name << "." << std::endl;
}

ScavTrap::~ScavTrap()
{
  std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
  if (this->_HitPoints > 0 && this->_EnergyPoints > 0)
    std::cout << this->_Name << " enter guardGate mode" << std::endl;
  else if (this->_HitPoints > 0 && this->_EnergyPoints <= 0)
    std::cout << this->_Name << " has no energy left ..." << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
  if (this->_HitPoints > 0 && this->_EnergyPoints > 0)
  {
    this->_EnergyPoints--;
    std::cout << this->_Name << " punches " << target << " for "
              << this->_AttackDamage << " hit points. " << this->_Name
              << " has now " << this->_EnergyPoints << " energy points left."
              << std::endl;
  }
  else if (this->_HitPoints > 0 && this->_EnergyPoints <= 0)
    std::cout << this->_Name << " has no energy left ..." << std::endl;
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
