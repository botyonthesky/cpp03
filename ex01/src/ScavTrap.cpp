/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 13:55:08 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/07 11:29:57 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"
#include "../include/ClapTrap.hpp"

ScavTrap::ScavTrap()
{
    
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Construct of Scavtrap : " << _name << std::endl;
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
    _gate_mode = false;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destruct of ScavTrap : " << _name << std::endl;   
}

ScavTrap::ScavTrap(ScavTrap& other) : ClapTrap::ClapTrap(other)
{
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    ClapTrap::operator=(other);
    return (*this);
}

void    ScavTrap::attack(const std::string& target)
{
    if (this->_energy_points == 0 || this->_hit_points == 0)
    {
        std::cout << "You dont have anymore energy points or health points" << std::endl;
        return ;
    }
    this->set_nrjPoints(this->_energy_points - 1);
    
    std::cout << "ScavTrap : " << this->_name << " attack "
    << target << " causing " << this->_attack_damage
    << " points of damage" << std::endl;   
}

void    ScavTrap::guardGate(void)
{
    if (_gate_mode == true)
    {
        std::cout << "ScavTrap : " << this->_name
        << " is already in Gate keeper mode." << std::endl; 
    }
    else
    {
        std::cout << "ScavTrap : " << this->_name
        << " is now in Gate keeper mode" << std::endl;
        _gate_mode = true;
    }
}

void    ScavTrap::put_info_scav(void)
{
    std::cout << "ScavTrap : " << this->_name
    << " have :" << std::endl;
    std::cout << this->_hit_points << " health points, " << std::endl;
    std::cout<< this->_energy_points << " energy points, and " << std::endl;
    std::cout<< this->_attack_damage << " attack points" << std::endl << std::endl;
}