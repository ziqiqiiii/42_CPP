#include "../headers/AForm.hpp"

AForm::AForm(): _name(""), _signed(0), _grade_sign(150), _grade_exec(150)
{

}

AForm::~AForm()
{

}

AForm::AForm(const AForm& other): _name(other.getName()), _signed(other.getSign()), _grade_sign(other.getGradeSign()), _grade_exec(other.getGradeExec())
{
    *this = other;
}

AForm& AForm::operator=(const AForm& other)
{
    if (this != &other)
    {
        this->_signed     = other.getSign();
    }
    return (*this);
}

AForm::AForm(const string& name, int grade_sign, int grade_exec): _name(name), _signed(false), _grade_sign(grade_sign), _grade_exec(grade_exec)
{
    if (grade_sign < 1 || grade_exec < 1)
        throw AForm::GradeTooHighException();
    else if (grade_sign > 150 || grade_exec > 150)
        throw AForm::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, const AForm& other)
{
    os << "Name: " << other.getName() << " , Grade to sign: " << other.getGradeSign();
    os << " , Grade to execute: " << other.getGradeExec() << " , Signed: " << other.getSign() << endl;
    return os;
}

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
    if (this->_signed == true)
    {
        cout << "Form " << this->getName() << " already signed" << endl;
        return ;
    }
    if (bureaucrat.getGrade() <= this->getGradeSign()) {
        this->_signed = true;
    }
    AForm::signForm(bureaucrat);
}

void AForm::signForm(const Bureaucrat &bureaucrat) const
{
    if (this->_signed == true) {
        cout << bureaucrat.getName() << " signed form " << this->_name << endl;
    }
    else {
        cout << bureaucrat.getName() << " couldn't sign form " << this->_name;
        cout << " because grade too low" << endl;
    }
}

string AForm::getName() const
{
    return this->_name;
}

int AForm::getGradeSign() const
{
    return this->_grade_sign;
}

int AForm::getGradeExec() const
{
    return this->_grade_exec;
}

bool AForm::getSign() const
{
    return this->_signed;
}