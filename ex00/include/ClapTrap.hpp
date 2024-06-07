/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:31:55 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/07 08:33:28 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include "../include/ClapTrap.hpp"
#include <string>
#include <iostream>

class ClapTrap
{
    private:
        std::string     _name;
        int             _hit_points;
        int             _energy_points;
        int             _attack_damage;
        
    public:

        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap& other);
        ClapTrap& operator=(const ClapTrap& other);
        ~ClapTrap();
        
        void            attack(const std::string& target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);
        void            set_hitPoints(int hitPts);
        void            set_nrjPoints(int nrjPts);
        void            set_attackDamage(int attackDam);
        int             get_hitPoints(void);
        int             get_nrjPoints(void);
        int             get_attackDamage(void);
        void            put_info_clap(void);
        std::string     get_name(void);
};


#endif