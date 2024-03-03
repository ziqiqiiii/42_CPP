/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzi-qi <tzi-qi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:08:17 by tzi-qi            #+#    #+#             */
/*   Updated: 2024/02/20 13:12:22 by tzi-qi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cerr << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 1;
    }

    for (int i = 1; i < argc; ++i) {
        for (char *ptr = argv[i]; *ptr != '\0'; ++ptr) {
            std::cout << (char)toupper(*ptr);
        }
        std::cout << ' ';
    }

    std::cout << std::endl;

    return 0;
}