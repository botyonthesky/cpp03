/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:09:05 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/10 13:52:03 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

int main()
{
    DiamondTrap dt("Diamond Rust");
    DiamondTrap dt2;
    DiamondTrap dt3(dt);

    dt2 = dt;
    dt.put_info_diamond();
    dt2.put_info_diamond();
    dt3.put_info_diamond();

    
    dt.attack("enemy");
    dt.whoAmI();



    return (0);
}