#include "../headers/Bureaucrat.hpp"
#include "../headers/AForm.hpp"
#include "../headers/PresidentialPardonForm.hpp"
#include "../headers/RobotomyRequestForm.hpp"
#include "../headers/ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat crat("highlvl", 1);
	Bureaucrat crat1("midlvl", 75);
	Bureaucrat crat2("lowlvl", 150);

	cout << "=====SHRUBBERY FORM TESTS====" << endl;
	try
	{
		ShrubberyCreationForm newform("targetasdf");
		
		crat.signForm(newform);
		cout << "" << endl;
		crat.executeForm(newform);
		cout << "" << endl;
		crat1.executeForm(newform);
        cout << "" << endl;
        crat2.executeForm(newform);

	}
	catch (const std::exception& e)
	{
		std::cout << "error from catch : " << e.what() << "\n";
	}
    cout << endl << endl;
	cout << "Please Enter to continue" << endl;
	string input;
    getline(std::cin, input);
	cout << "============================" << endl;
	cout << "=====ROBOTOMY FORM TESTS====" << endl;
	try
	{
		RobotomyRequestForm newformrobo("targetasdf");
		
		crat.signForm(newformrobo);
		cout << "" << endl;
		crat.executeForm(newformrobo);
	}
	catch (const std::exception& e)
	{
		std::cout << "error from catch : " << e.what() << "\n";
	}
    cout << endl << endl;
	cout << "Please Enter to continue" << endl;
    getline(std::cin, input);
	cout << "============================" << endl;
	cout << "=====PRESIDENTIAL PARDON TESTS====" << endl;
	try
	{
		PresidentialPardonForm newformpred("targetasdf");
		
		crat.signForm(newformpred);
		cout << "" << endl;
		crat.executeForm(newformpred);
	}
	catch (const std::exception& e)
	{
		std::cout << "error from catch : " << e.what() << "\n";
	}
    cout << endl << endl;
	cout << "Please Enter to continue" << endl;
    getline(std::cin, input);
	cout << "============================" << endl;
	cout << "=====GRADE TOO LOW TEST====" << endl;
	try
	{
		PresidentialPardonForm newformpred("targetasdf");
		
		crat1.signForm(newformpred);
		crat2.executeForm(newformpred);
	}
	catch (const std::exception& e)
	{
		std::cout << "error from catch : " << e.what() << "\n";
	}
    cout << endl << endl;
	cout << "Please Enter to continue" << endl;
    getline(std::cin, input);
	cout << "============================" << endl;
	cout << "=====NO SIGN TEST====" << endl;
	try
	{
		PresidentialPardonForm newformpred("targetasdf");
		
		crat2.executeForm(newformpred);
	}
	catch (const std::exception& e)
	{
		std::cout << "error from catch : " << e.what() << "\n";
	}
	cout << "============================" << endl;
    cout << endl << endl;
	cout << "Please Enter to continue" << endl;
    getline(std::cin, input);

	return 0;
}