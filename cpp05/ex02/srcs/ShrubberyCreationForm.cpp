#include "../headers/ShrubberyCreationForm.hpp"
#include "../headers/AForm.hpp"
#include "../headers/Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("shrubbery", 145, 137), _target("")
{

}

ShrubberyCreationForm::ShrubberyCreationForm(string const &target): AForm("shrubbery", 145, 137)
{
    this->_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other): AForm(other)
{
    *this = other;
}

ShrubberyCreationForm  &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    if (this != &other)
        this->_target = other.getTarget();
    return *this;
}

string ShrubberyCreationForm::getTarget() const
{
    return this->_target;
}

std::ostream& operator<<(std::ostream& os, const ShrubberyCreationForm& other)
{
    os << "Name: " << other.getName() << " , Grade to sign: " << other.getGradeSign();
    os << " , Grade to execute: " << other.getGradeExec() << " , Signed: " << other.getSign();
    os << " , Target: " << other.getTarget() << endl;
    return os;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    if (!AForm::getSign())
        throw AForm::FormNotSign();
    if (executor.getGrade() > this->getGradeExec())
        throw AForm::CantExecForm();

    cout << executor.getName() << " execute form " << this->getName();

    string file_name = string(this->_target) + string("_shruberry");
    std::ofstream outputFile(file_name.c_str());
    if (!outputFile.is_open())
    {
        std::cerr << "Error: Unable to open file " << file_name << std::endl;
        return;
    }
    
    outputFile << "       *\n";
    outputFile << "      ***\n";
    outputFile << "     *****\n";
    outputFile << "    *******\n";
    outputFile << "   *********\n";
    outputFile << "  ***********\n";
    outputFile << " *************\n";
    outputFile << "       |\n";

    outputFile.close();
}