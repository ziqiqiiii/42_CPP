#include "../headers/Bureaucrat.hpp"
#include "../headers/AForm.hpp"
#include "../headers/PresidentialPardonForm.hpp"
#include "../headers/RobotomyRequestForm.hpp"
#include "../headers/ShrubberyCreationForm.hpp"
#include "../headers/Intern.hpp"

void	print(std::string str)
{
	std::cout << str << "\n";
}

void	print_nonl(std::string str)
{
	std::cout << str ;
}

int main()
{
	Bureaucrat crat("highlvl", 1);
	Bureaucrat crat1("midlvl", 75);
	Bureaucrat crat2("lowlvl", 150);
	Intern intern;

	print("=====SHRUBBERY FORM TESTS====");
	try
	{
		AForm *newform = intern.makeForm("shrubbery creation", "Bender");
		
		crat.signForm(*newform);
		print("");
		crat.executeForm(*newform);
		crat1.executeForm(*newform);
		delete newform;
	}
	catch (const std::exception& e)
	{
		std::cout << "error from catch : " << e.what() << "\n";
	}
	cout << endl << endl;
	cout << "Please Enter to continue" << endl;
	string input;
    getline(std::cin, input);
	print("============================");
	print("=====ROBOTOMY FORM TESTS====");
	try
	{
		AForm *newformrobo = intern.makeForm("robotomy request", "Bender");
		
		crat.signForm(*newformrobo);
		print("");
		crat.executeForm(*newformrobo);
		delete newformrobo;
	}
	catch (const std::exception& e)
	{
		std::cout << "error from catch : " << e.what() << "\n";
	}
	cout << endl << endl;
	cout << "Please Enter to continue" << endl;
    getline(std::cin, input);
	print("============================");
	print("=====PRESIDENTIAL PARDON TESTS====");
	try
	{
		AForm * newformpred = intern.makeForm("presidential pardon", "Bender");
		
		crat.signForm(*newformpred);
		print("");
		crat.executeForm(*newformpred);
		delete newformpred;
	}
	catch (const std::exception& e)
	{
		std::cout << "error from catch : " << e.what() << "\n";
	}
	cout << endl << endl;
	cout << "Please Enter to continue" << endl;
    getline(std::cin, input);
	print("============================");
	print("=====GRADE TOO LOW TEST====");
	try
	{		
		AForm *newformpred =  intern.makeForm("presidential pardon", "Bender");
		crat1.signForm(*newformpred);
		crat2.executeForm(*newformpred);

		delete newformpred;
	}
	catch (const std::exception& e)
	{
		std::cout << "error from catch : " << e.what() << "\n";
	}
	cout << endl << endl;
	cout << "Please Enter to continue" << endl;
    getline(std::cin, input);
	print("============================");
	print("=====NO SIGN TEST====");
	try
	{		
		AForm *newformpred =  intern.makeForm("presidential pardon", "Bender");
		crat2.executeForm(*newformpred);

		delete newformpred;
	}
	catch (const std::exception& e)
	{
		std::cout << "error from catch : " << e.what() << "\n";
	}
	cout << endl << endl;
	cout << "Please Enter to continue" << endl;
    getline(std::cin, input);
	print("============================");
	print("=====UNKNOWN TEST====");
	try {
		AForm *newformpred =  intern.makeForm("presion", "Bender");
		delete newformpred;
	}
	catch(const std::exception &e)
	{
		std::cout << "error from catch : " << e.what() << "\n";
	}
	print("============================");
	cout << endl << endl;
	cout << "Please Enter to continue" << endl;
    getline(std::cin, input);

	return 0;
}