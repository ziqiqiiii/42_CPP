#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string.h>
#include "Bureaucrat.hpp"

using std::string;
using std::cout;
using std::endl;

class Bureaucrat;

class AForm
{
    private:
        const string  _name;
        bool    _signed;
        const int     _grade_sign;
        const int     _grade_exec;
    public:
        AForm();
        virtual ~AForm();
        AForm(const string& name, int grade_sign, int grade_exec);
        AForm(const AForm& other);
        AForm &operator=(const AForm& other);

        friend std::ostream& operator<<(std::ostream& os, const AForm& other);

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
        class FormNotSign: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "the Form is not signed";
                }
        };
        class CantExecForm: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "grade is lower than form _grade_exec";
                }
        };

        //getter
        string getName() const;
        int getGradeSign() const;
        int getGradeExec() const;
        bool getSign() const;

        void beSigned(const Bureaucrat &bureaucrat);
        void signForm(const Bureaucrat &bureaucrat) const;

        virtual void execute(const Bureaucrat &executor) const = 0;
};

#endif