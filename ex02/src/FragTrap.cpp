/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 09:51:37 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/19 11:43:50 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"
#include "../include/ClapTrap.hpp"

FragTrap::FragTrap()
{
    
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Construct of FragTrap : " << this->_name << std::endl;
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "Destruct of FragTRap : " << this->_name << std::endl;
}


FragTrap::FragTrap(FragTrap& other) : ClapTrap::ClapTrap(other)
{
    
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    ClapTrap::operator=(other);
    return (*this);
}

void    FragTrap::put_info_frag(void)
{
    std::cout << "FragTrap : " << this->_name << " have :" << std::endl 
    << this->_hit_points << " health points, " << std::endl
    << this->_energy_points << " energy points, " << std::endl
    << this->_attack_damage << " attack points." << std::endl;
}

void    FragTrap::highFivesGyuys(void)
{
    if (this->_hit_points == 0)
    {
        std::cout << _name << " cannot ask for a high five, " << _name
        <<  " is dead !!" << std::endl;
        return ;
    }
    std::cout << "FragTrap : " << this->_name
    << " request for a high fives" << std::endl;
    std::cout << "HIGH FIVES !!" << std::endl;
}