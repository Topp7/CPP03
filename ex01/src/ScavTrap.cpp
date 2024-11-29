/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:27:46 by stopp             #+#    #+#             */
/*   Updated: 2024/11/23 19:45:30 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_HP = 100;
	_energy = 50;
	_AD = 20;
	_guarding = 0;

	std::cout << " Default ScavTrap created!" << std::endl;
}
ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	this->_HP = 100;
	_energy = 50;
	_AD = 20;
	_guarding = 0;
	std::cout << "ScavTrap " << this->_name << " created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	_name = copy.getname();
	_HP = copy.getHP();
	_energy = copy.getenergy();
	_AD = copy.getAD();
	_guarding = copy.guard_status();
	std::cout << "ScavTrap " << _name << " has been copied" << std::endl;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &copy)
{
	if (this != &copy)
	{
		_name = copy.getname();
		_HP = copy.getHP();
		_energy = copy.getenergy();
		_AD = copy.getAD();
	}
	std::cout << "ScavTrap " << _name << " has been copied(assigned)" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " has been destroyed!" << std::endl;
}

bool	ScavTrap::guard_status()const
{
	return _guarding;
}

void	ScavTrap::guardGate()
{
	if (_guarding)
		std::cout << "ScavTrap " << _name << " is already in Gatekeeper mode!" << std::endl;
	else
	{
		_guarding = true;
		std::cout << "ScavTrap " << _name << " is now in Gatekeeper mode!" << std::endl;
	}
}
