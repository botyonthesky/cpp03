/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 13:55:01 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/06 09:55:14 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private :
    
    public :
    
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap& other);
        ScavTrap& operator=(ScavTrap& other);
        ~ScavTrap();

        void            attack(const std::string& target);
        void            guardGate(void);
        void            put_info_scav(void);

};

#endif