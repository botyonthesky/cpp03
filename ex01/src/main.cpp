/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 13:55:05 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/07 09:16:47 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"

int main()
{
    // ScavTrap st("Hero");
    // ScavTrap st2(st);
    // ScavTrap st3;
    
    // st3 = st;
    // st.put_info_scav();
    // st2.put_info_scav();
    // st3.put_info_scav();

    // st.attack("Enemy");
    // st2.attack("Enemy");
    // st3.attack("Enemy");

    // st.put_info_scav();
    // st2.put_info_scav();
    // st3.put_info_scav();

    ClapTrap hero("Martin");
    ClapTrap enemy("Reggie");
    ScavTrap hero2("Rust");

    hero.put_info_clap();
    hero2.put_info_scav();
    enemy.put_info_clap();
    
    std::cout << "The battle start !" << std::endl;
    
    hero.attack(enemy.get_name());
    enemy.takeDamage(hero.get_attackDamage());
    hero2.guardGate();
    hero2.attack(enemy.get_name());
    enemy.takeDamage(hero2.get_attackDamage());

    std::cout << "The battle end" << std::endl;
    
    
    hero.put_info_clap();
    hero2.put_info_scav();
    enemy.put_info_clap();

    return (0);
}