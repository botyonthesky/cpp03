/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 06:51:51 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/07 07:00:37 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : public ClapTrap
{
    private :

    public :
        FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap& other);
        FragTrap& operator=(const FragTrap& other);
        ~FragTrap();

        void    highFivesGyuys(void);
        void    put_info_frag(void);

        
};


#endif 