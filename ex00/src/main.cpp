/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:16:52 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/06 11:39:42 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"


int main()
{
    ClapTrap hero("Rustin Cohle");
    ClapTrap hero2;
    
    hero2 = hero;
    ClapTrap hero3(hero);

    hero.put_trap_info();
    hero2.put_trap_info();
    hero3.put_trap_info();

    
    ClapTrap enemy("Reggie Ledoux");
    enemy.put_trap_info();
    std::cout << "The battle start ! " << std::endl << std::endl;
    hero.set_attackDamage(4);
    hero.attack(enemy.get_name());
    enemy.takeDamage(hero.get_attackDamage());
    hero.attack(enemy.get_name());
    enemy.takeDamage(hero.get_attackDamage());
    enemy.beRepaired(10);
    hero.attack(enemy.get_name());
    enemy.takeDamage(hero.get_attackDamage());
    hero.attack(enemy.get_name());
    enemy.takeDamage(hero.get_attackDamage());
    hero.attack(enemy.get_name());
    enemy.takeDamage(hero.get_attackDamage());
    std::cout << "The battle end" << std::endl << std::endl;
    hero.put_trap_info();    
    enemy.put_trap_info();


    return (0);
}