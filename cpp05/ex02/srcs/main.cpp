#include "../headers/AForm.hpp"
#include "../headers/PresidentialPardonForm.hpp"
#include "../headers/RobotomyRequestForm.hpp"
#include "../headers/ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat highlvl("highlvl", 1);
	Bureaucrat midlvl("midlvl", 75);
	Bureaucrat lowlvl("lowlvl", 150);

	cout << "=====SHRUBBERY FORM TESTS====" << endl;
	try
	{
		ShrubberyCreationForm newform("targetasdf");
		
		cout << endl;
		cout << newform << endl;
		cout << highlvl << endl;
		cout << midlvl << endl;
		cout << lowlvl << endl;
		cout << endl;

		highlvl.signForm(newform);
		midlvl.signForm(newform);
		cout << "" << endl;

		highlvl.executeForm(newform);
		cout << "" << endl;
		midlvl.executeForm(newform);
        cout << "" << endl;
        lowlvl.executeForm(newform);

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
		
		cout << endl;
		cout << newformrobo << endl;
		cout << highlvl << endl;
		cout << midlvl << endl;
		cout << lowlvl << endl;
		cout << endl;

		highlvl.signForm(newformrobo);
		cout << "" << endl;

		highlvl.executeForm(newformrobo);
		midlvl.executeForm(newformrobo);
		lowlvl.executeForm(newformrobo);
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
		
		cout << endl;
		cout << newformpred << endl;
		cout << highlvl << endl;
		cout << midlvl << endl;
		cout << lowlvl << endl;
		cout << endl;

		lowlvl.signForm(newformpred);
		midlvl.signForm(newformpred);
		highlvl.signForm(newformpred);
		cout << "" << endl;

		highlvl.executeForm(newformpred);
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
		
		cout << endl;
		cout << newformpred << endl;
		cout << highlvl << endl;
		cout << midlvl << endl;
		cout << lowlvl << endl;
		cout << endl;

		midlvl.signForm(newformpred);
		lowlvl.executeForm(newformpred);
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

		cout << endl;
		cout << newformpred << endl;
		cout << highlvl << endl;
		cout << midlvl << endl;
		cout << lowlvl << endl;
		cout << endl;

		lowlvl.executeForm(newformpred);
	}
	catch (const std::exception& e)
	{
		std::cout << "error from catch : " << e.what() << "\n";
	}
	cout << "============================" << endl;
    cout << endl << endl;
	cout << "Please Enter to continue" << endl;
    getline(std::cin, input);
	cout << endl << endl << endl;
	cout << "Congratulations that You PASSED all the test" << endl;
	cout << endl << endl << endl;

	return 0;
}