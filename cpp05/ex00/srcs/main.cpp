#include "../headers/Bureaucrat.hpp"

int main()
{
    {
        try 
        {
            Bureaucrat Eva("Eva", 100);
            Bureaucrat Daniel("Daniel", 1);

            cout << Eva << endl;
            cout << Daniel << endl;

            cout << endl;

            cout << Eva.getName() << " decrease grade" << endl;
            Eva.DcreaseGrade();
            cout << Eva << endl;
            cout << Daniel.getName() << " increase grade" << endl;
            Daniel.IncreaseGrade();
            cout << Daniel << endl;
        }
        catch (const std::exception& e)
        {
            cout << "Error: " << e.what() << endl;
        }
    }
    cout << endl;
	cout << "Please Enter to continue" << endl;
	string input;
    getline(std::cin, input);
    {
        try 
        {
            Bureaucrat Eva("Eva", 100);
            Bureaucrat Kelly("Kelly", 149);

            cout << Eva << endl;
            cout << Kelly << endl;

            cout << endl;
            
            cout << Eva.getName() << " decrease grade" << endl;
            Eva.DcreaseGrade();
            cout << Eva << endl;
            cout << Kelly.getName() << " decrease grade" << endl;
            Kelly.DcreaseGrade();
            cout << Kelly << endl;
            cout << Kelly.getName() << " decrease grade" << endl;
            Kelly.DcreaseGrade();
            cout << Kelly << endl;
        }
        catch (const std::exception& e)
        {
            cout << "Error: " << e.what() << endl;
        }
    }
    cout << endl;
	cout << "Please Enter to continue" << endl;
    getline(std::cin, input);
    {
        try 
        {
            Bureaucrat Eva("Eva", 100);
            Bureaucrat Kelly("Kelly", 149);

            cout << Eva << endl;
            cout << Kelly << endl;

            cout << endl;

            cout << Eva.getName() << " decrease grade" << endl;
            Eva.DcreaseGrade();
            cout << Eva << endl;
            cout << Kelly.getName() << " increase grade" << endl;
            Kelly.IncreaseGrade();
            cout << Kelly << endl;
            cout << Kelly.getName() << " increase grade" << endl;
            Kelly.IncreaseGrade();
            cout << Kelly << endl;
        }
        catch (const std::exception& e)
        {
            cout << "Error: " << e.what() << endl;
        }
    }
    cout << endl;
	cout << "Please Enter to continue" << endl;
    getline(std::cin, input);
    return 0;
}