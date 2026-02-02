#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : _HitPoints(10), _EnergyPoints(10), _AttackDamage(0), _Name("Erwann")
{
  std::cout << "Default constructor called." << std::endl
            << this->_HitPoints << " Hit Points, " << this->_EnergyPoints
            << " Energy Points, " << this->_AttackDamage
            << " Attack Damage and named " << this->_Name << "." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
    : _HitPoints(src._HitPoints), _EnergyPoints(src._EnergyPoints),
      _AttackDamage(src._AttackDamage), _Name(src._Name)
{
  std::cout << "Copy constructor called." << std::endl;
}

ClapTrap::ClapTrap(const std::string name) 
    : _HitPoints(10), _EnergyPoints(10), _AttackDamage(0), _Name(name)
{
  std::cout << "Constructor with name parameter called." << std::endl
            << this->_HitPoints << " Hit Points, " << this->_EnergyPoints
            << " Energy Points, " << this->_AttackDamage
            << " Attack Damage and named " << this->_Name << "." << std::endl;
}

ClapTrap::~ClapTrap() { std::cout << "Destructor called" << std::endl; }

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{

  if (this != &rhs)
  {
    this->_HitPoints = rhs._HitPoints;
    this->_EnergyPoints = rhs._EnergyPoints;
    this->_AttackDamage = rhs._AttackDamage;
  }
  return (*this);
}

void ClapTrap::attack(const std::string &target)
{
  if (this->_HitPoints > 0 && this->_EnergyPoints > 0)
  {
    this->_EnergyPoints--;
    std::cout << this->_Name << " attacks " << target << " for "
              << this->_AttackDamage << " hit points. " << this->_Name
              << " has now " << this->_EnergyPoints << " energy points left."
              << std::endl;
  }
}

void ClapTrap::takeDamage(unsigned int amount)
{
  if (this->_HitPoints > 0)
  {
    this->_HitPoints -= amount;
    std::cout << this->_Name << " loses " << amount
              << " hit points and has now " << this->_HitPoints
              << " hit points." << std::endl;
  }

  else
    std::cout << this->_Name << " is dead X_x ..." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
  if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
  {
    this->_EnergyPoints--;
    this->_HitPoints += amount;
    std::cout << this->_Name << " uses 1 energy point to regain " << amount
              << " hit points. He has now " << this->_HitPoints
              << " hit points and " << this->_EnergyPoints
              << " energy points left." << std::endl;
  }
}
