/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 09:51:37 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/07 07:05:23 by tmaillar         ###   ########.fr       */
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
    std::cout << "FragTrap : " << this->get_name() << " have :" << std::endl 
    << this->get_hitPoints() << " health points, " << std::endl
    << this->get_nrjPoints() << " energy points, " << std::endl
    << this->get_attackDamage() << " attack points." << std::endl;
}

void    FragTrap::highFivesGyuys(void)
{
    std::cout << "FragTrap : " << this->get_name()
    << " request for a positive high fives !" << std::endl;
}