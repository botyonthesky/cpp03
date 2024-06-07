/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 09:51:40 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/07 15:49:09 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/ClapTrap.hpp"

int main()
{
    FragTrap ft("Rust");
    // FragTrap ft1;
    // FragTrap ft2(ft);
    ScavTrap st("Martin");
    // ft1 = ft;

    ft.put_info_frag();
    st.put_info_scav();
    // ft1.put_info_frag();
    // ft2.put_info_frag();

    // ft.set_hitPoints(0);
    
    // ft.highFivesGyuys();
    // ft1.highFivesGyuys();
    // ft2.highFivesGyuys();

    return (0);
}