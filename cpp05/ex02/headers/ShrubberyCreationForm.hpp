#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>
#include <filesystem>
#include <iostream>

class ShrubberyCreationForm: public AForm
{
    private:
        string _target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(string const &target);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm& other);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);

        string getTarget() const;

        void execute(const Bureaucrat &executor) const;
};

#endif