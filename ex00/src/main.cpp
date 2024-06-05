/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:16:52 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/05 12:50:32 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

int main()
{
    ClapTrap hero("Boty");
    std::cout << std::endl;
    
    std::cout << hero.get_name() << " have : " << std::endl;
    std::cout << hero.get_hitPoints() << " health points" << std::endl;
    std::cout << hero.get_nrjPoints() << " energy points" << std::endl;   
    std::cout << hero.get_attackDamage() << " points of damage" << std::endl << std::endl;
    
    ClapTrap enemy("Macron");
    std::cout << std::endl;
    
    std::cout << enemy.get_name() << " have : " << std::endl;
    std::cout << enemy.get_hitPoints() << " health points" << std::endl;
    std::cout << enemy.get_nrjPoints() << " energy points" << std::endl;   
    std::cout << enemy.get_attackDamage() << " points of damage" << std::endl << std::endl;

    std::cout << "The battle start ! " << std::endl << std::endl;

    hero.set_attackDamage(4);
    std::cout << std::endl;
    
    hero.attack(enemy.get_name());
    std::cout << std::endl;

    enemy.takeDamage(hero.get_attackDamage());
    std::cout << std::endl;

    hero.attack(enemy.get_name());
    std::cout << std::endl;
    
    enemy.takeDamage(hero.get_attackDamage());
    std::cout << std::endl;

    enemy.beRepaired(10);
    std::cout << std::endl;
    
    hero.attack(enemy.get_name());
    std::cout << std::endl;
    
    enemy.takeDamage(hero.get_attackDamage());
    std::cout << std::endl;
    
    hero.attack(enemy.get_name());
    std::cout << std::endl;
    
    enemy.takeDamage(hero.get_attackDamage());
    std::cout << std::endl;

    hero.attack(enemy.get_name());
    std::cout << std::endl;
    
    enemy.takeDamage(hero.get_attackDamage());
    std::cout << std::endl;

    
    std::cout << "The battle end" << std::endl << std::endl;
    
    std::cout << hero.get_name() << " have : " << std::endl;
    std::cout << hero.get_hitPoints() << " health points" << std::endl;
    std::cout << hero.get_nrjPoints() << " energy points" << std::endl;   
    std::cout << hero.get_attackDamage() << " points of damage" << std::endl << std::endl;
    
    std::cout << enemy.get_name() << " have : " << std::endl;
    std::cout << enemy.get_hitPoints() << " health points" << std::endl;
    std::cout << enemy.get_nrjPoints() << " energy points" << std::endl;   
    std::cout << enemy.get_attackDamage() << " points of damage" << std::endl << std::endl;

    return (0);
}