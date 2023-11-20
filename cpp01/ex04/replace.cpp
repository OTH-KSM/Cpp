/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okassimi <okassimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 22:42:09 by okassimi          #+#    #+#             */
/*   Updated: 2023/11/09 16:54:52 by okassimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

bool is_empty(std::ifstream& pFile)
{
    pFile.seekg(0, std::ios::end);  
    bool isEmpty = pFile.tellg() == 0;  
    pFile.seekg(0, std::ios::beg);  
    return isEmpty;
}

int _replace(std::string filename, std::string s1, std::string s2)	{
    std::ifstream infile (filename);
    if (infile.is_open() && is_empty(infile))  {
        std::cout << "File is empty" << std::endl;
        return (1);
    }
    else if (infile.is_open())
    {
        std::ofstream copyfile ("copy.replace");
        std::string var;
        size_t found;
        while (getline(infile, var))
        {
            found = var.find(s1);
            size_t start = 0;
            while ((found = var.find(s1, start)) != std::string::npos) {
                copyfile << var.substr(start, found - start);
                copyfile << s2;
                start = found + s1.size();
            }
            copyfile << var.substr(start);
            if (!infile.eof()) {
                copyfile << std::endl;
            }
        }
        copyfile.close();
        infile.close();
    }
    else    {
        std::cout << "Error: Can't open file" << std::endl;
        return (1);
    }
    return (0);
}
