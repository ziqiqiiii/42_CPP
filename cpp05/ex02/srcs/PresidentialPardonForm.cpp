#include "../headers/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("Presidential", 25, 5), _target("")
{

}

PresidentialPardonForm::PresidentialPardonForm(string const &target): AForm("Presidential", 25, 5)
{
    this->_target = target;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
{
    *this = other;
}


PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    if (this != &other)
        this->_target = other.getTarget();
    return *this;
}

string PresidentialPardonForm::getTarget() const
{
    return this->_target;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
    if (!AForm::getSign())
        throw AForm::FormNotSign();
    if (executor.getGrade() > this->getGradeExec())
        throw AForm::CantExecForm();
    
    cout << executor.getName() << " execute form " << this->getName() << endl;
    cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << endl;
}