#include "../headers/easyfind.hpp"

int main()
{
    {
        cout << "-----------------------------"<< endl;
        cout << "Vector Test Cases" << endl;
        cout << "-----------------------------"<< endl;
        vector<int> vec = {1, 2, 3, 4, 5};
        try {
            vector<int>::iterator result_vec = easyFind(vec, 5);
            cout << "Value found in vector ar index [" << std::distance(vec.begin(), result_vec) << endl;
        } catch (const std::invalid_argument& e) {
            cerr << e.what() << endl;
        }
    }
    cout << endl << endl;
	cout << "Please Enter to continue" << endl;
	string input;
    getline(std::cin, input);

    return 0;
}