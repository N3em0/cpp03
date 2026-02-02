
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
  this->_HitPoints = 100;
  this->_EnergyPoints = 100;
  this-> _AttackDamage = 30;
  std::cout << "Default FragTrap constructor called." << std::endl
            << this->_HitPoints << " Hit Points, " << this->_EnergyPoints
            << " Energy Points, " << this->_AttackDamage
            << " Attack Damage and named " << this->_Name << "." << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
  *this = src;
  std::cout << "Copy FragTrap constructor called." << std::endl;
}

FragTrap::FragTrap(const std::string name)
    : ClapTrap(name)
{
  this->_HitPoints = 100;
  this->_EnergyPoints = 100;
  this-> _AttackDamage = 30;
  std::cout << "FragTrap constructor with name parameter called." << std::endl
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
  std::cout << this->_Name << " try to high fives people." << std::endl;
}

void FragTrap::attack(const std::string &target)
{
  if (this->_HitPoints > 0 && this->_EnergyPoints > 0)
  {
    this->_EnergyPoints--;
    std::cout << this->_Name << " sings so badly to " << target << " that they take "
              << this->_AttackDamage << " hit points. " << this->_Name
              << " has now " << this->_EnergyPoints << " energy points left."
              << std::endl;
  }
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
