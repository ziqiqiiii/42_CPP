#include "../headers/Bureaucrat.hpp"
#include "../headers/Form.hpp"

int main()
{
    {
        try 
        {
            Bureaucrat Eva("Eva", 100);
            Bureaucrat Daniel("Daniel", 1);
            Form       idk("idk", 10, 100);
            Form       maybe("maybe", 5, 40);
    
            cout << Eva << endl; 
            cout << Daniel << endl;

            cout << endl;
            
            idk.beSigned(Eva);
            maybe.beSigned(Daniel);

            cout << endl;

            cout << "Forms after signing:" << endl;
            cout << idk;
            cout << maybe;
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
            // Creating bureaucrats
            Bureaucrat Eva("Eva", 100);
            Bureaucrat Daniel("Daniel", 1);
            Bureaucrat John("John", 50);

            // Creating forms
            Form idk("idk", 10, 100);
            Form maybe("maybe", 5, 40);
            Form form3("form3", 80, 90);

            // Printing out bureaucrats
            cout << "Initial bureaucrats:" << endl;
            cout << Eva << endl;
            cout << Daniel << endl;
            cout << John << endl;

            cout << endl;

            // Printing out forms
            cout << "Initial forms:" << endl;
            cout << idk;
            cout << maybe;
            cout << form3;

            cout << endl;

            // Attempting to sign forms
            idk.beSigned(Eva);  // Eva signs idk
            maybe.beSigned(Daniel); // Daniel signs maybe
            form3.beSigned(John); // John tries to sign form3

            cout << endl;

            // Printing out forms after signing
            cout << "Forms after signing:" << endl;
            cout << idk;
            cout << maybe;
            cout << form3;
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

            Form idk("idk", 10, 151);
            Form maybe("maybe", 5, 40);

            cout << "Initial bureaucrats:" << endl;
            cout << Eva << endl;
            cout << Kelly << endl;

            cout << endl;

            cout << "Initial forms:" << endl;
            cout << idk;
            cout << maybe;
            
            cout << endl;

            idk.beSigned(Eva);
            maybe.beSigned(Kelly);

            cout << endl;

            cout << "Forms after signing:" << endl;
            cout << idk;
            cout << maybe;
        }
        catch (const std::exception& e)
        {
            cout << "Error: " << e.what() << endl;
        }
    }
    return 0;
}