/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:12:46 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/07 16:06:00 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"
#include "../include/FragTrap.hpp"
#include "../include/ClapTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap()
{
    std::cout << "Basic constructor" << std::endl;
    _hit_points = FragTrap::_hit_points;
    _energy_points = ScavTrap::_energy_points;
    _attack_damage = FragTrap::_attack_damage;
}

DiamondTrap::DiamondTrap(std::string name) : 
ClapTrap(name + "_clap_name"),  ScavTrap(name), FragTrap(name), _name(name)
{
    std::cout << "Construct of DiamondTrap : " << this->_name << std::endl;
    _hit_points = FragTrap::_hit_points;
    _energy_points = ScavTrap::_energy_points;
    _attack_damage = FragTrap::_attack_damage;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Destruct of " << _name << std::endl;
}

void    DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void    DiamondTrap::put_info_diamond(void)
{
    std::cout << this->_name << "have : " << std::endl
    << this->_hit_points << " health points," << std::endl
    << this->_energy_points << " energy points," << std::endl
    << this->_attack_damage << " attack points," << std::endl;
}