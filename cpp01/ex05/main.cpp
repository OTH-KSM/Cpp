/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 22:45:38 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/09 15:42:51 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"

int main ( int argc, char *argv[] ) {
    
    (void)argv;
    if (argc != 2) {
        std::cout << "Usage: ./harl <level>" << std::endl;
        return (EXIT_FAILURE);
    }
    Harl h;
    h.complain(argv[1]);
}