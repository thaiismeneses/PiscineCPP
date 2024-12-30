/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfranco <thfranco@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 20:05:22 by thfranco          #+#    #+#             */
/*   Updated: 2024/12/28 20:05:30 by thfranco         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <iostream>
#include <cctype>

void noise(std::string str)
{
    for (size_t i = 0; i < str.size(); i++)
        std::cout << (char)std::toupper(str[i]);
}


int main(int argc, char **argv)
{

    std::string str;

    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    else
    {
        for (int i = 1; argv[i]; i++)
        {
            str = argv[i];
            noise(str);
        }
        std::cout << std::endl;
    }
}
