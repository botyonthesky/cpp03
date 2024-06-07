/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 09:51:40 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/07 07:06:21 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/ClapTrap.hpp"

int main()
{
    FragTrap ft("Boty");
    FragTrap ft1;
    FragTrap ft2(ft);
    
    ft1 = ft;

    ft.put_info_frag();
    ft1.put_info_frag();
    ft2.put_info_frag();
    
    ft.highFivesGyuys();
    ft1.highFivesGyuys();
    ft2.highFivesGyuys();

    return (0);
}