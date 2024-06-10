/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:09:09 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/10 12:00:33 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"
#include "../include/ClapTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Basic constructor" << std::endl;
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;   
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Construct of FragTrap : " << this->_name << std::endl;
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
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
        std::cout << _name << " cannot ask for a high five," << _name
        <<  " is dead !!" << std::endl;
        return ;
    }
    std::cout << "FragTrap : " << this->_name
    << " request for a high fives" << std::endl;
    std::cout << "HIGH FIVES !!" << std::endl;
}