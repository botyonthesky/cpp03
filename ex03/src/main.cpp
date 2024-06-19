/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:09:05 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/19 12:52:37 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

int main()
{
    DiamondTrap dt("Diamond Rust");
    DiamondTrap dt2;
    DiamondTrap dt3("Diamond Martin");

    dt2 = dt;
    std::cout << std::endl;
    dt.put_info_diamond();
    std::cout << std::endl;
    dt2.put_info_diamond();
    std::cout << std::endl;
    dt3.put_info_diamond();
    std::cout << std::endl;

    dt.whoAmI();
    std::cout << std::endl;
    dt2.whoAmI();
    std::cout << std::endl;
    dt3.whoAmI();
    std::cout << std::endl;
    
    dt.attack("enemy");
    std::cout << std::endl;
    dt.put_info_diamond();
    std::cout << std::endl;


    return (0);
}