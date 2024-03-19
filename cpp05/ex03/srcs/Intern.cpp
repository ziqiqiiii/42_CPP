#include "../headers/Intern.hpp"


Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern &other)
{
    *this = other;
}

Intern &Intern::operator=(const Intern &other)
{
    if (this != &other)
        *this = other;
    return *this;
}

string str_tolower(const string &str)
{
    string result = str;
    for (size_t i = 0; i < result.length(); ++i){
        if (result[i] >= 'A' && result[i] <= 'Z')
            result[i] += ('a' - 'A');
    }
    return result;
}

string str_trim(string str)
{
    string result;

    for (size_t i = 0; i < str.length(); ++i) {
        if (str[i] != ' ' && str[i] != '\t')
            result.push_back(str[i]);
    }
    return result;
}

AForm* Intern::makeForm(string form_name, string target)
{
    string forms[] = { "presidentialpardon", "robotomyrequest", "shrubberycreation"};
    string form_name_tolower = str_tolower(form_name);
    string form_name_trim = str_trim(form_name_tolower);
    AForm *result;
    int i = -1;
    
    while (++i < 3)
        if (form_name_trim == forms[i]) break;
    switch (i)
    {
        case 0:
            result = new PresidentialPardonForm(target);
            break ;
        case 1:
            result = new RobotomyRequestForm(target);
            break ;
        case 2:
            result = new ShrubberyCreationForm(target);
            break ;
        default:
            result = NULL;
    }
    if (result == NULL) {
        throw Intern::CantCreateForm();
    }
    else if (form_name != "" && result != NULL)
        cout << "Intern creates " << result->getName() << endl;
    return result;
}