/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:09:05 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/19 11:51:17 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

int main()
{
    DiamondTrap dt("Diamond Rust");
    DiamondTrap dt2(dt);
    DiamondTrap dt3("Diamond Martin");

    // dt2 = dt;
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
    dt.whoAmI();



    return (0);
}