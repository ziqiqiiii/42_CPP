#include "PhoneBook.hpp"

int main() {
    PhoneBook phonebook;

    while (true) {
        std::string command;
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::cin >> command;

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