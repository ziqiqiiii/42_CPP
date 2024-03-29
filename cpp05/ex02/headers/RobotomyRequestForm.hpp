#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>

class RobotomyRequestForm: public AForm {
    private:
        string _target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(string const &target);
        ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm& other);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &other);

        string getTarget() const;

        void execute(const Bureaucrat &executor) const;
};

std::ostream& operator<<(std::ostream& os, const RobotomyRequestForm& other);

#endif