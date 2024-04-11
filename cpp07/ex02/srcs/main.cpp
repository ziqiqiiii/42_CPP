#include "../headers/Array.hpp"

#define MAX_VAL 10

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    {

        cout << "-----------------------------"<< endl;
        cout << "Empty Array Test" << endl;
        cout << "-----------------------------"<< endl;
        Array<int> tmp;
        try
        {
            for (int i = 0; i < MAX_VAL + 1; i++)
                cout << "tmp[" << i << "]:\t" << tmp[i] << endl;
        }
        catch(const std::exception& e)
        {
           cout << e.what() << '\t' << endl;
           cout << "You tried to access past the last element of the array" << endl;
        }

        cout << endl << endl;
        cout << "Please Enter to continue" << endl;
        string input;
        getline(std::cin, input);

        cout << "------------------------------------------------------"<< endl;
        cout << "                   Out of Bound Test" << endl;
        cout << "------------------------------------------------------"<< endl;


        cout << "-----------------------------"<< endl;
        cout << "Access Negative index" << endl;
        cout << "-----------------------------"<< endl;
        try
        {
            numbers[-2] = 0;
        }
        catch(const std::exception& e)
        {
            cout << e.what() << '\n';
            cout << "index was -2" << endl;
            delete[] mirror;
        }

        cout << "-----------------------------"<< endl;
        cout << "Access Index more than Size" << endl;
        cout << "-----------------------------"<< endl;
        try
        {
            numbers[MAX_VAL] = 0;
            cout << MAX_VAL << endl;
        }
        catch(const std::exception& e)
        {
            cout << e.what() << '\n';
            cout << "tried to access past the last element of the array" << endl;
        }

        cout << endl << endl;
        cout << "Please Enter to continue" << endl;
        getline(std::cin, input);

        tmp = numbers;
        Array<int> test(tmp);

        cout << "-----------------------------"<< endl;
        cout << "Copy Constructor Test" << endl;
        cout << "-----------------------------"<< endl;
        try
        {
            for (int i = 0; i < MAX_VAL; i++)
            {
                if (tmp[i] != test[i])
                {
                    cout << "didn't save the same value!!" << endl;
                    return 1;
                }
                cout << "tmp [" << i << "]: " << tmp[i] << endl; //uncomment these two lines to see the arrays have the same values
                cout << "test[" << i << "]: " << test[i] << endl;
            }
        }
        catch(const std::exception& e)
        {
           cout << e.what() << '\t';
           cout << "You tried to access past the last element of the array" << endl;
        }

        cout << endl << endl;
        cout << "Please Enter to continue" << endl;
        getline(std::cin, input);

        cout << "-----------------------------"<< endl;
        cout << "Modify Value Test" << endl;
        cout << "-----------------------------"<< endl;
        cout << endl << "test[1]:\t" << test[1] << endl;
        cout << "tmp[1]:\t\t" << tmp[1] << endl << endl;

        test[1] = 123456789;

        cout << "test[1]:\t" << test[1] << endl;
        cout << "tmp[1]:\t\t" << tmp[1] << endl << endl;
    }

    cout << endl << endl;
    cout << "Please Enter to continue" << endl;
    string input;
    getline(std::cin, input);

    cout << "------------------------------------------------------"<< endl;
    cout << "   Congratulations that you PASSED all the test !" << endl;
    cout << "------------------------------------------------------"<< endl << endl;

    return 0;
}