#include "Harl.hpp"

Harl::Harl(void)
{
    cout << "Harl object is created" << endl;
}

Harl::~Harl(void)
{
    cout << "Harl object is deleted" << endl;
}

void Harl::complain(std::string level)
{
    void (Harl::*ptr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string array[] = {"debug", "info", "warning", "error"};

    for (int i = 0; i < 4; ++i) {
    if (level == array[i]) {
        (this->*ptr[i])();
        break;
    }
}
}
void Harl::debug(void)
{
    cout << "I love having extra bacon for my ";
    cout << "7XL-double-cheese-triple-pickle-special-ketchup burger. ";
    cout << "I really do!" << endl;
}

void Harl::info(void)
{
    cout << "I cannot believe adding extra bacon costs more money. ";
    cout << "You didn’t put enough bacon in my burger! ";
    cout << "If you did, I wouldn’t be asking for more!" << endl;
}

void Harl::warning(void)
{
    cout << "I think I deserve to have some extra bacon for free. ";
    cout << "I’ve been coming for years whereas you started working ";
    cout << " here since last month." << endl;
}

void Harl::error(void)
{
    cout << "This is unacceptable! ";
    cout << " I want to speak to the manager now." << endl;
}