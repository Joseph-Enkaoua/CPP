#include "FragTrap.hpp"

FragTrap::FragTrap(){
	std::cout << "Default FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string str){
	_name = str;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	std::cout << "Default FragTrap constructor (str) called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other){
	std::cout << "Copy FragTrap constructor called" << std::endl;
	*this = other;
}

FragTrap & FragTrap::operator=(const FragTrap & rhs){
	std::cout << "FragTrap: Copy assignment operator called" << std::endl;
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;
	return (*this);
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap: Destructor called" << std::endl;
}

void	FragTrap::attack(const std::string &target){
	if (_energy_points > 0 && _hit_points > 0){
		_energy_points--;
		std::cout << "FragTrap " << _name << " attacks " << target << 
		", cousing " << _attack_damage << " points of damage!" << std::endl;
	}
}

void	highFivesGuys( void ){
	std::cout << "High five? ✋" << std::endl;
}
