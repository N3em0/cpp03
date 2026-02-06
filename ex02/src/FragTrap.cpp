
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
  this->_HitPoints = 100;
  this->_EnergyPoints = 100;
  this->_AttackDamage = 30;
  std::cout << "Default FragTrap constructor called. " << this->_HitPoints
            << " Hit Points, " << this->_EnergyPoints << " Energy Points, "
            << this->_AttackDamage << " Attack Damage and named " << this->_Name
            << "." << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
  if (this != &src)
  {
    this->_HitPoints = src._HitPoints;
    this->_EnergyPoints = src._EnergyPoints;
    this->_AttackDamage = src._AttackDamage;
  }
  std::cout << "Copy FragTrap constructor called." << std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
  this->_HitPoints = 100;
  this->_EnergyPoints = 100;
  this->_AttackDamage = 30;
  std::cout << "FragTrap constructor with name parameter called. "
            << this->_HitPoints << " Hit Points, " << this->_EnergyPoints
            << " Energy Points, " << this->_AttackDamage
            << " Attack Damage and named " << this->_Name << "." << std::endl;
}

FragTrap::~FragTrap()
{
  std::cout << "FragTrap destructor called." << std::endl;
}

void FragTrap::highFivesGuys()
{
  if (this->_HitPoints > 0 && this->_EnergyPoints > 0)
    std::cout << this->_Name << " try to high fives people." << std::endl;
  else if (this->_HitPoints > 0 && this->_EnergyPoints <= 0)
    std::cout << this->_Name << " has no energy left ..." << std::endl;
}

void FragTrap::attack(const std::string &target)
{
  if (this->_HitPoints > 0 && this->_EnergyPoints > 0)
  {
    this->_EnergyPoints--;
    std::cout << this->_Name << " do nothing to " << target << " but they take "
              << this->_AttackDamage << " hit points. " << this->_Name
              << " has now " << this->_EnergyPoints << " energy points left."
              << std::endl;
  }
  else if (this->_HitPoints > 0 && this->_EnergyPoints <= 0)
    std::cout << this->_Name << " has no energy left ..." << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{

  if (this != &rhs)
  {
    this->_HitPoints = rhs._HitPoints;
    this->_EnergyPoints = rhs._EnergyPoints;
    this->_AttackDamage = rhs._AttackDamage;
  }
  return (*this);
}
