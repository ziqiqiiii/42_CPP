#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string.h>

using std::string;
using std::cout;
using std::endl;


class Bureaucrat {
    private:
        int _grade;
        const string _name;
    public:
        Bureaucrat();
        Bureaucrat(const string& name, int grade);
        Bureaucrat(const Bureaucrat& other);
        ~Bureaucrat();
        Bureaucrat &operator=(const Bureaucrat &other);

        friend std::ostream& operator<<(std::ostream& os, const Bureaucrat& other);

		class GradeTooHighException : public std::exception
		{

			public:
				virtual const char* what() const throw()
				{
					return "Grade cannot be higher than 1";
				}
		};

		class GradeTooLowException : public std::exception
		{

			public:
				virtual const char* what() const throw()
				{
					return "Grade cannot be lower than 150";
				}
		};

        const string& getName();
        int getGrade();
        void IncreaseGrade();
        void DcreaseGrade();
};

#endif 