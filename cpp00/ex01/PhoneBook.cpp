#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : currentContacts(0) {}

void PhoneBook::addContact()
{
    // std::string firstName, lastName, nickname, phoneNumber, darkestSecret;

    // std::cout << "Enter First Name: ";
    // std::getline(std::cin >> std::ws, firstName);
    // std::cout << "Enter Last Name: ";
    // std::getline(std::cin >> std::ws, lastName);
    // std::cout << "Enter Nickname: ";
    // std::getline(std::cin >> std::ws, nickname);
    // std::cout << "Enter Phone Number: ";
    // std::getline(std::cin >> std::ws, phoneNumber);
    // std::cout << "Enter Darkest Secret: ";
    // std::getline(std::cin >> std::ws, darkestSecret);
    if (currentContacts < MAX_CONTACTS)
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
        std::cout << "Contact number " << currentContacts << " added." << std::endl;
        contacts[currentContacts] = Contact(firstName, lastName, nickname, phoneNumber, darkestSecret);
        currentContacts++;
    } 
    else 
    {
        // Replace the oldest contact
        std::cout << "Phonebook is full. Replacing the " << currentContacts % MAX_CONTACTS << "th contact" <<std::endl;
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
        contacts[currentContacts % MAX_CONTACTS] = Contact(firstName, lastName, nickname, phoneNumber, darkestSecret);
        // currentContacts = currentContacts % MAX_CONTACTS;
        currentContacts++;
    }
    std::cin.clear();
}

void PhoneBook::searchContact() const {

    if (currentContacts == 0) {
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
    std::cin >> index;

    if (index >= 0 && index < currentContacts) {
        contacts[index].displayFullInfo();
    } else {
        std::cout << "Invalid index. Please try again." << std::endl;
    }
}