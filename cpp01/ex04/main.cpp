/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 22:41:17 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/09 15:17:03 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char *argv[])
{
    if (argc != 4) {
        std::cout << "Syntax : <filename> s1 s2" << std::endl;
        return (1);
    }
    if (_replace(argv[1], argv[2], argv[3]) == 1)
        return (1);
    return 0;
}


