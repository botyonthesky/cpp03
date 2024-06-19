/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 09:51:40 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/19 11:43:37 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/ClapTrap.hpp"

int main()
{
    FragTrap ft("Rust");
    FragTrap ft1;
    FragTrap ft2(ft);
    ScavTrap st("Martin");
    ft1 = ft;
    
    std::cout << std::endl;
    ft.put_info_frag();
    std::cout << std::endl;
    st.put_info_scav();
    std::cout << std::endl;
    ft1.put_info_frag();
    std::cout << std::endl;
    ft2.put_info_frag();
    std::cout << std::endl;

    ft.set_hitPoints(0);
    ft.put_info_frag();
    std::cout << std::endl;
    
    ft.highFivesGyuys();
    std::cout << std::endl;
    ft1.highFivesGyuys();
    std::cout << std::endl;
    ft2.highFivesGyuys();
    std::cout << std::endl;


    return (0);
}