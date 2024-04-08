#include "../headers/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("robotomy", 72, 45), _target("")
{

}

RobotomyRequestForm::RobotomyRequestForm(string const &target): AForm("robotomy", 72, 45), _target(target)
{

}


RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
{
    *this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    if (this != &other)
        this->_target = other.getTarget();
    return *this;
}

string RobotomyRequestForm::getTarget() const
{
    return this->_target;
}

std::ostream& operator<<(std::ostream& os, const RobotomyRequestForm& other)
{
    os << "Name: " << other.getName() << " , Grade to sign: " << other.getGradeSign();
    os << " , Grade to execute: " << other.getGradeExec() << " , Signed: " << other.getSign();
    os << " , Target: " << other.getTarget() << endl;
    return os;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
    if (!AForm::getSign())
        throw AForm::FormNotSign();
    if (executor.getGrade() > this->getGradeExec())
        throw AForm::CantExecForm();

    cout << executor.getName() << " execute form " << this->getName() << endl;

    cout << "DRRRRRRRRRR DRRRRRRR DRRRRR " << endl;
    srand(time(0));
    if (rand() % 2 == 0)
        cout << this->getTarget() << " has been robotomized" << endl;
    else
        cout << this->getTarget() << " failed to robotomized" << endl;
}
