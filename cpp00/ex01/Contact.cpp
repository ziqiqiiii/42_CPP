/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzi-qi <tzi-qi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:08:22 by tzi-qi            #+#    #+#             */
/*   Updated: 2024/02/20 13:08:23 by tzi-qi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int Contact::n = 0;

Contact::Contact(): index(n++)
{
    std::cout << "Contact " << index << "th is created"<< std::endl;
}

Contact::Contact(const std::string &firstName, const std::string &lastName,
                 const std::string &nickname, const std::string &phoneNumber,
                 const std::string &darkestSecret)
    : firstName(firstName), lastName(lastName), nickname(nickname),
      phoneNumber(phoneNumber), darkestSecret(darkestSecret) {}

void Contact::displayShortInfo(int index) const 
{
    std::cout << std::right << std::setw(10) << index << "|"
              << std::setw(10) << (firstName.length() > 10 ? firstName.substr(0, 9) + "." : firstName) << "|"
              << std::setw(10) << (lastName.length() > 10 ? lastName.substr(0, 9) + "." : lastName) << "|"
              << std::setw(10) << (nickname.length() > 10 ? nickname.substr(0, 9) + "." : nickname) << std::endl;
}

void Contact::displayFullInfo() const {
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}

Contact::~Contact()
{
    std::cout << "Contact " << index << "th is deleted" << std::endl;
}