#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
    public:
        Intern();
        ~Intern();
        Intern(const Intern &other);
        Intern &operator=(const Intern &other);

        class CantCreateForm: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Intern couldn't create form as he don't know what to create";
                }
        };

        AForm* makeForm(string form_name, string target);
};

#endif