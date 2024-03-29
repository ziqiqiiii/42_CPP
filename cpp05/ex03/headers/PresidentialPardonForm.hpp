#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm: public AForm
{
    private:
        string _target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(string const &target);
        ~PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm& other);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &other);

        string getTarget() const;

        void execute(const Bureaucrat &executor) const;
};

std::ostream& operator<<(std::ostream& os, const PresidentialPardonForm& other);

#endif 