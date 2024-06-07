/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 09:51:37 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/07 11:30:44 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"
#include "../include/ClapTrap.hpp"

FragTrap::FragTrap()
{
    
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Construct of FragTrap : " << this->get_name() << std::endl;
    this->set_hitPoints(100);
    this->set_nrjPoints(100);
    this->set_attackDamage(30);
}

FragTrap::~FragTrap()
{
    std::cout << "Destruct of FragTRap : " << this->get_name() << std::endl;
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
    std::cout << "FragTrap : " << this->_name
    << " request for a positive high fives !" << std::endl;
}