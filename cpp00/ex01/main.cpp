/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzi-qi <tzi-qi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:08:28 by tzi-qi            #+#    #+#             */
/*   Updated: 2024/02/20 14:08:35 by tzi-qi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


std::string trim(const std::string& str) {
  size_t start = 0;
  size_t end = str.size();

  while (start < end && std::isspace(str[start])) {
    ++start;
  }
  while (end > start && std::isspace(str[end - 1])) {
    --end;
  }
  return str.substr(start, end - start);
}

std::string to_upper(const std::string& str) {
    std::string upper_str;
    size_t size = str.size();
    
    for (size_t i = 0; i < size; i++) {
        char c = str[i];
        upper_str += std::toupper(c);
    }
    return upper_str;
}

int main() 
{
    PhoneBook phonebook;

    while (true) 
    {
        std::string command;
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);
        command = to_upper(command);
        command = trim(command);
        if (command == "ADD")
            phonebook.addContact();
        else if (command == "SEARCH")
            phonebook.searchContact();
        else if (command == "EXIT")
            break;
        else
            std::cout << "Invalid command. Please try again." << std::endl;
    }

    return 0;
}