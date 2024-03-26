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
    int	level_int;
	std::string levels[] = { "error", "warning", "info", "debug"};

	level_int = -1;
	while (++level_int < 4)
		if (level == levels[level_int]) break ;
	switch (level_int)
	{
		case 3:
			Harl::debug();
			//fall through
		case 2:
			Harl::info();
			//fall through
		case 1:
			Harl::warning();
			//fall through
		case 0:
			Harl::error();	
			break;
	  	default:
	  		std::cout << endl << "[ Probably complaining about insignificant problems ]\n";
			break;
	}
}

void Harl::debug(void)
{
    cout << "\n[DEBUGGING]" << endl;
    cout << "I love having extra bacon for my ";
    cout << "7XL-double-cheese-triple-pickle-special-ketchup burger. ";
    cout << "I really do!" << endl;
}

void Harl::info(void)
{
    cout << "\n[INFO]" << endl;
    cout << "I cannot believe adding extra bacon costs more money. ";
    cout << "You didn’t put enough bacon in my burger! ";
    cout << "If you did, I wouldn’t be asking for more!" << endl;
}

void Harl::warning(void)
{
    cout << "\n[WARNING]" << endl;
    cout << "I think I deserve to have some extra bacon for free. ";
    cout << "I’ve been coming for years whereas you started working ";
    cout << " here since last month." << endl;
}

void Harl::error(void)
{
    cout << "\n[ERROR]" << endl;
    cout << "This is unacceptable! ";
    cout << " I want to speak to the manager now." << endl;
}