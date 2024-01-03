#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
public:
    PhoneBook();
    ~PhoneBook();
    void addContact();
    void searchContact() const;

private:
    static const int MAX_CONTACTS = 8;
    Contact contacts[MAX_CONTACTS];
    int currentContacts;
};

#endif // PHONEBOOK_HPP