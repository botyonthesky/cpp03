/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:09:05 by tmaillar          #+#    #+#             */
/*   Updated: 2024/06/07 16:06:47 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

int main()
{
    // FragTrap ft("Martin");
    DiamondTrap dt("Rust");
    DiamondTrap dt2;

    
    // ft.put_info_frag();
    dt.put_info_diamond();
    dt2.put_info_diamond();
    return (0);
}