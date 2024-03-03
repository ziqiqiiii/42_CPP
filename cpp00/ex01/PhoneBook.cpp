/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzi-qi <tzi-qi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:08:36 by tzi-qi            #+#    #+#             */
/*   Updated: 2024/02/20 13:08:37 by tzi-qi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : currentContacts(0) 
{
    std::cout << "PhoneBook is created" << std::endl;
}

void PhoneBook::addContact()
{
    std::string firstName, lastName, nickname, phoneNumber, darkestSecret;

    std::cout << "Enter First Name: ";
    std::getline(std::cin >> std::ws, firstName);
    std::cout << "Enter Last Name: ";
    std::getline(std::cin >> std::ws, lastName);
    std::cout << "Enter Nickname: ";
    std::getline(std::cin >> std::ws, nickname);
    std::cout << "Enter Phone Number: ";
    std::getline(std::cin >> std::ws, phoneNumber);
    std::cout << "Enter Darkest Secret: ";
    std::getline(std::cin >> std::ws, darkestSecret);
    if (currentContacts < MAX_CONTACTS)
    {
        std::cout << "Adding contact to the " << currentContacts << "th index" << std::endl;
        new (&contacts[currentContacts]) Contact(firstName, lastName, nickname, phoneNumber, darkestSecret);
    }
    else
    {
        std::cout << "Phonebook is full. Replacing the " << currentContacts % MAX_CONTACTS << "th contact" <<std::endl;
        new (&contacts[currentContacts % MAX_CONTACTS]) Contact(firstName, lastName, nickname, phoneNumber, darkestSecret);
    }
    currentContacts++;
    std::cin.clear();
}

void PhoneBook::searchContact() const {

    if (currentContacts == 0)
    {
        std::cout << "Phonebook is empty." << std::endl;
        return;
    }
    std::cout << std::right << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;
    
    int num = currentContacts;
    if (currentContacts >= MAX_CONTACTS) 
        num = MAX_CONTACTS;
    
    for (int i = 0; i < num; ++i) {
        contacts[i].displayShortInfo(i);
    }

    int index;
    std::cout << "Enter index to display: ";

    while (!(std::cin >> index) || index < 0 || index >= currentContacts) 
    {
        std::cout << "Invalid index. Please try again." << std::endl;
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        std::cout << "Enter index to display: ";
    }
    contacts[index].displayFullInfo();
}

PhoneBook::~PhoneBook()
{
    std::cout << "PhoneBook is deleted" << std::endl;
}