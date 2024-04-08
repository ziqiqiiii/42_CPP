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
	print("=====SHRUBBERY FORM TESTS====");
	try
	{
		Bureaucrat highlvl("highlvl", 1);
		Bureaucrat midlvl("midlvl", 75);
		Bureaucrat lowlvl("lowlvl", 150);
		Intern intern;
		AForm *newform = intern.makeForm("shrubbery creation", "Bender");
		
		cout << endl;
		cout << *newform << endl;
		cout << highlvl << endl;
		cout << midlvl << endl;
		cout << lowlvl << endl;
		cout << endl;

		highlvl.signForm(*newform);
		print("");
		highlvl.executeForm(*newform);
		midlvl.executeForm(*newform);
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
		Bureaucrat highlvl("highlvl", 1);
		Bureaucrat midlvl("midlvl", 75);
		Bureaucrat lowlvl("lowlvl", 150);
		Intern intern;
		AForm *newformrobo = intern.makeForm("robotomy request", "Bender");
		
		cout << endl;
		cout << *newformrobo << endl;
		cout << highlvl << endl;
		cout << midlvl << endl;
		cout << lowlvl << endl;
		cout << endl;

		highlvl.signForm(*newformrobo);
		print("");
		midlvl.executeForm(*newformrobo);
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
		Bureaucrat highlvl("highlvl", 1);
		Bureaucrat midlvl("midlvl", 75);
		Bureaucrat lowlvl("lowlvl", 150);
		Intern intern;
		AForm * newformpred = intern.makeForm("presidential pardon", "Bender");
		
		cout << endl;
		cout << *newformpred << endl;
		cout << highlvl << endl;
		cout << midlvl << endl;
		cout << lowlvl << endl;
		cout << endl;

		highlvl.signForm(*newformpred);
		print("");
		midlvl.executeForm(*newformpred);
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
		Bureaucrat highlvl("highlvl", 1);
		Bureaucrat midlvl("midlvl", 75);
		Bureaucrat lowlvl("lowlvl", 150);
		Intern intern;
		AForm *newformpred =  intern.makeForm("presidential pardon", "Bender");

		cout << endl;
		cout << *newformpred << endl;
		cout << highlvl << endl;
		cout << midlvl << endl;
		cout << lowlvl << endl;
		cout << endl;

		midlvl.signForm(*newformpred);
		lowlvl.executeForm(*newformpred);

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
		Bureaucrat highlvl("highlvl", 1);
		Bureaucrat midlvl("midlvl", 75);
		Bureaucrat lowlvl("lowlvl", 150);
		Intern intern;	
		AForm *newformpred =  intern.makeForm("presidential pardon", "Bender");

		cout << endl;
		cout << *newformpred << endl;
		cout << highlvl << endl;
		cout << midlvl << endl;
		cout << lowlvl << endl;
		cout << endl;

		lowlvl.executeForm(*newformpred);

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
		Bureaucrat highlvl("highlvl", 1);
		Bureaucrat midlvl("midlvl", 75);
		Bureaucrat lowlvl("lowlvl", 150);
		Intern intern;
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
	cout << endl << endl << endl;
	cout << "Congratulations that You PASSED all the test" << endl;
	cout << endl << endl << endl;

	return 0;
}