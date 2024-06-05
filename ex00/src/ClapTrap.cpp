/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:17:07 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/05 13:04:53 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
    _hit_points = 10;
    _energy_points = 10;
    _attack_damage = 0;
    std::cout << "Construct of " << this->get_name() << std::endl;
}
ClapTrap& ClapTrap::operator=(ClapTrap& other)
{
    _name = other.get_name();
    _hit_points = other.get_hitPoints();
    _energy_points = other.get_nrjPoints();
    _attack_damage = other.get_attackDamage();
    std::cout << "copy assignment of " << this->get_name()
    << " to " << other.get_name() << std::endl;
    return (*this);
}

ClapTrap::ClapTrap(ClapTrap& other)
{
    std::cout << "copy" << std::endl;
    _name = other.get_name();
    _hit_points = other.get_hitPoints();
    _energy_points = other.get_nrjPoints();
    _attack_damage = other.get_attackDamage();
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destruct of " << this->get_name() << std::endl;
}
void    ClapTrap::set_hitPoints(int hitPts)
{
    _hit_points = hitPts;
}

void    ClapTrap::set_nrjPoints(int nrjPts)
{
    _energy_points = nrjPts;
}

void    ClapTrap::set_attackDamage(int attackDam)
{
    _attack_damage = attackDam;
    std::cout << "The amout of damage points for "
    << this->get_name() <<  " is now of : " << attackDam
    << " points" << std::endl;
}
int     ClapTrap::get_hitPoints(void)
{
    return (_hit_points);
}

int     ClapTrap::get_nrjPoints(void)
{
    return (_energy_points);
}

int     ClapTrap::get_attackDamage(void)
{
    return (_attack_damage);
}

std::string ClapTrap::get_name(void)
{
    return (_name);
}
void    ClapTrap::attack(const std::string& target)
{
    if (this->get_nrjPoints() == 0 || this->get_hitPoints() == 0)
    {
        std::cout << "You dont have anymore energy points or hit points" << std::endl;
        return ;
    }
    this->set_nrjPoints(this->get_nrjPoints() - 1);
    
    std::cout << "ClapTrap : " << this->get_name() << " attack "
    << target << " causing " << this->get_attackDamage()
    << " points of damage" << std::endl;   
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    this->set_hitPoints(this->get_hitPoints() - amount);
    if (this->get_hitPoints() <= 0)
    {
        std::cout << "ClapTrap : " << this->get_name()
        << " is dead" << std::endl;
        return ;
    }
    std::cout << "ClapTrap : " << this->get_name() << " loose "
    << amount << " points of damage" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->get_nrjPoints() == 0 || this->get_hitPoints() == 0)
    {
        std::cout << "You dont have anymore energy points or hit points" << std::endl;
        return ;
    }
    this->set_nrjPoints(this->get_nrjPoints() - 1);
    this->set_hitPoints(this->get_hitPoints() + amount);
    std::cout << "ClapTrap : " << this->get_name()
    << " repaired hitself and have recovery " << amount
    << " health points" << std::endl;
}