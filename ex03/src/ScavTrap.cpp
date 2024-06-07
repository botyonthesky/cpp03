/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:09:07 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/07 15:51:03 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"
#include "../include/ClapTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Basic constructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Construct of Scavtrap : " << _name << std::endl;
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
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
    std::cout << "ScavTrap : " << _name
    << " is now in Gate keeper mode" << std::endl;
}

void    ScavTrap::put_info_scav(void)
{
    std::cout << "ScavTrap : " << this->_name
    << " have :" << std::endl;
    std::cout << this->_hit_points << " health points, " << std::endl;
    std::cout<< this->_energy_points << " energy points, and " << std::endl;
    std::cout<< this->_attack_damage << " attack points" << std::endl;
}