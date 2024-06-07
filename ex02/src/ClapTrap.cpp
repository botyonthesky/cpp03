/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 09:51:35 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/07 07:06:06 by tmaillar         ###   ########.fr       */
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
    std::cout << "Construct of ClapTrap : " << this->get_name() << std::endl;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    _name = (other._name + "_copy_assignment");
    _hit_points = other._hit_points;
    _energy_points = other._energy_points;
    _attack_damage = other._attack_damage;
    std::cout << "Copy assignment of " << other._name
    << " into " << this->_name << std::endl;
    return (*this);
}

ClapTrap::ClapTrap(ClapTrap& other)
{
    _name = (other._name + "_copy");
    _hit_points = other._hit_points;
    _energy_points = other._energy_points;
    _attack_damage = other._attack_damage;
    std::cout << "Copy of : " << other._name
    << " into " << _name << std::endl;

}

ClapTrap::~ClapTrap()
{
    std::cout << "Destruct of : " << this->get_name() << std::endl;
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
        this->set_hitPoints(0);
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

void    ClapTrap::put_info_clap()
{
    std::cout << "ClapTrap : " << this->get_name() << " have :" << std::endl; 
    std::cout << this->get_hitPoints() << " health points, " << std ::endl;
    std::cout << this->get_nrjPoints() << " energy points, and " << std ::endl;
    std::cout << this->get_attackDamage() << " attack points" << std ::endl;

}