#include "../headers/Bureaucrat.hpp"
#include "../headers/PresidentialPardonForm.hpp"
#include "../headers/RobotomyRequestForm.hpp"
#include "../headers/ShrubberyCreationForm.hpp"

Bureaucrat::Bureaucrat()
{

}

Bureaucrat::Bureaucrat(const string& name, int grade): _grade(grade), _name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
    *this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this != &other)
    {
        this->_grade = other._grade;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& other)
{
    os << other.getName() << " , bureaucrat grade " << other.getGrade();
    return os;
}

const string& Bureaucrat::getName() const
{
    return this->_name;
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

void Bureaucrat::IncreaseGrade()
{
    this->_grade--;
    if (this->_grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::DcreaseGrade()
{
    this->_grade++;
    if (this->_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(AForm &form)
{
    try {
        form.beSigned(*this);

    } catch (const std::exception &e) {
        cout << this->getName() << " couldn't sign the form " << form.getName();
        cout << " because " << e.what() << endl;
    }
}

void Bureaucrat::executeForm(AForm const &form)
{
    try {
        form.execute(*this);
    } catch (const std::exception &e) {
        cout << this->getName() << " couldn't execute the form " << form.getName();
        cout << " because " << e.what() << endl;
    }
}
