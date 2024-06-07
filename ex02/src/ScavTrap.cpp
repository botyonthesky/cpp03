/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 09:51:42 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/06 13:07:48 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"
#include "../include/ClapTrap.hpp"

ScavTrap::ScavTrap()
{
    
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Construct of Scavtrap : " << this->get_name() << std::endl;
    this->set_hitPoints(100);
    this->set_nrjPoints(50);
    this->set_attackDamage(20);
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destruct of ScavTrap : " << this->get_name() << std::endl;   
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
    if (this->get_nrjPoints() == 0 || this->get_hitPoints() == 0)
    {
        std::cout << "You dont have anymore energy points or health points" << std::endl;
        return ;
    }
    this->set_nrjPoints(this->get_nrjPoints() - 1);
    
    std::cout << "ScavTrap : " << this->get_name() << " attack "
    << target << " causing " << this->get_attackDamage()
    << " points of damage" << std::endl;   
}

void    ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap : " << this->get_name()
    << " is now in Gate keeper mode" << std::endl;
}

void    ScavTrap::put_info_scav(void)
{
    std::cout << "ScavTrap : " << this->get_name()
    << " have :" << std::endl;
    std::cout << this->get_hitPoints() << " health points, " << std::endl;
    std::cout<< this->get_nrjPoints() << " energy points, and " << std::endl;
    std::cout<< this->get_attackDamage() << " attack points" << std::endl;
}