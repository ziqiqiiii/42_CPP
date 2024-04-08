#include "../headers/Form.hpp"

Form::Form(): _name(""), _signed(0), _grade_sign(150), _grade_exec(150)
{

}

Form::~Form()
{

}

Form::Form(const Form& other): _name(other.getName()), _signed(other.getSign()), _grade_sign(other.getGradeSign()), _grade_exec(other.getGradeExec())
{
    *this = other;
}

Form& Form::operator=(const Form& other)
{
    if (this != &other)
    {
        this->_signed     = other.getSign();
    }
    return (*this);
}

Form::Form(const string& name, int grade_sign, int grade_exec): _name(name), _signed(false), _grade_sign(grade_sign), _grade_exec(grade_exec)
{
    if (grade_sign < 1 || grade_exec < 1)
        throw Form::GradeTooHighException();
    else if (grade_sign > 150 || grade_exec > 150)
        throw Form::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, const Form& other)
{
    os << "Name: " << other.getName() << " , Grade to sign: " << other.getGradeSign();
    os << " , Grade to execute: " << other.getGradeExec() << " , Signed: " << other.getSign() << endl;
    return os;
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
    if (this->_signed == true)
    {
        cout << "Form already signed" << endl;
        return ;
    }
    if (bureaucrat.getGrade() <= this->getGradeSign()) {
        this->_signed = true;
    }
    Form::signForm(bureaucrat);
}

void Form::signForm(const Bureaucrat &bureaucrat)
{
    if (this->_signed == true) {
        cout << bureaucrat.getName() << " signed form " << this->_name << endl;
    }
    else {
        cout << bureaucrat.getName() << " couldn't sign form " << this->_name;
        cout << " because grade too low" << endl;
    }
}

string Form::getName() const
{
    return this->_name;
}

int Form::getGradeSign() const
{
    return this->_grade_sign;
}

int Form::getGradeExec() const
{
    return this->_grade_exec;
}

bool Form::getSign() const
{
    return this->_signed;
}