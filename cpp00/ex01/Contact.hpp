#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Contact {
public:
    Contact();
    Contact(const std::string &firstName, const std::string &lastName,
            const std::string &nickname, const std::string &phoneNumber,
            const std::string &darkestSecret);
    ~Contact();
    void displayShortInfo(int index) const;
    void displayFullInfo() const;

private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;
    int index;
    static int n;
};

#endif // CONTACT_HPP