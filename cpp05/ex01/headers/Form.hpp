#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string.h>
#include "../headers/Bureaucrat.hpp"

using std::string;
using std::cout;
using std::endl;

class Form
{
    private:
        const string  _name;
        bool    _signed;
        const int     _grade_sign;
        const int     _grade_exec;
    public:
        Form();
        ~Form();
        Form(const string& name, int grade_sign, int grade_exec);
        Form(const Form& other);
        Form &operator=(const Form& other);

        class GradeTooHighException: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Grade cannot be higher than 1";
                }
        };
        class GradeTooLowException: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Grade cannot be lower than 150";
                }
        };

        string getName() const;
        int getGradeSign() const;
        int getGradeExec() const;
        bool getSign() const;

        void beSigned(const Bureaucrat &bureaucrat);
        void signForm(const Bureaucrat &bureaucrat);

};

std::ostream& operator<<(std::ostream& os, const Form& other);

#endif