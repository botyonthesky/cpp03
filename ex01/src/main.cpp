/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 13:55:05 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/19 11:33:31 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"

int main()
{

    ClapTrap hero("Martin");
    ClapTrap enemy("Reggie");
    ScavTrap hero2("Rust");
    std::cout << std::endl;
    hero.put_info_clap();
    std::cout << std::endl;
    hero2.put_info_scav();
    std::cout << std::endl;
    enemy.put_info_clap();
    std::cout << std::endl;

    std::cout << "The battle start !" << std::endl;
    
    hero.attack(enemy.get_name());
    enemy.takeDamage(hero.get_attackDamage());
    hero2.guardGate();
    hero2.attack(enemy.get_name());
    enemy.takeDamage(hero2.get_attackDamage());

    std::cout << "The battle end" << std::endl << std::endl;
    
    
    hero.put_info_clap();
    std::cout << std::endl;
    hero2.put_info_scav();
    std::cout << std::endl;
    enemy.put_info_clap();
    std::cout << std::endl;

    return (0);
}