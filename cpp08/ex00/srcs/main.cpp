#include "../headers/easyfind.hpp"

int main()
{
    {
        cout << "-----------------------------"<< endl;
        cout << "Vector Test Cases" << endl;
        cout << "-----------------------------"<< endl;

        vector<int> vec;
        vec.push_back(1);
        vec.push_back(2);
        vec.push_back(3);
        vec.push_back(4);
        vec.push_back(5);

        for (vector<int>::const_iterator it = vec.begin(); it != vec.end(); ++it) {
            cout << *it << " ";
        }
        cout << endl;
    
        try {
            vector<int>::iterator result_vec = easyFind(vec, 4);
            cout << "trying to find 4 in the vector " << endl;
            cout << "Value found in vector ar index [" << std::distance(vec.begin(), result_vec) << "]" << endl;
        } catch (const std::invalid_argument& e) {
            cerr << e.what() << endl;
        }
    }
    cout << endl << endl;
	cout << "Please Enter to continue" << endl;
	string input;
    getline(std::cin, input);
    {
        cout << "-----------------------------"<< endl;
        cout << "List Test Cases" << endl;
        cout << "-----------------------------"<< endl;
        
        list<int> lst;
        lst.push_back(1);
        lst.push_back(2);
        lst.push_back(3);
        lst.push_back(4);
        lst.push_back(5);

        for (list<int>::const_iterator it = lst.begin(); it != lst.end(); ++it) {
            cout << *it << " ";
        }
        cout << endl;

        try {
            list<int>::iterator result_lst = easyFind(lst, 3);
            cout << "trying to find 3 in the list " << endl;
            cout << "Value found in list ar index [" << std::distance(lst.begin(), result_lst) << "]" << endl;
        } catch (const std::invalid_argument& e) {
            cerr << e.what() << endl;
        }
    }
    cout << endl << endl;
	cout << "Please Enter to continue" << endl;
    getline(std::cin, input);
    {
        cout << "-----------------------------"<< endl;
        cout << "Dequeue Test Cases" << endl;
        cout << "-----------------------------"<< endl;
        
        deque<int> deq;
        deq.push_back(1);
        deq.push_back(2);
        deq.push_back(3);
        deq.push_back(4);
        deq.push_back(5);

        for (deque<int>::const_iterator it = deq.begin(); it != deq.end(); ++it) {
            cout << *it << " ";
        }
        cout << endl;

        try {
            deque<int>::iterator result_deq = easyFind(deq, 6);
            cout << "trying to find 6 in the deque " << endl;
            cout << "Value found in list ar index [" << std::distance(deq.begin(), result_deq) << "]" << endl;
        } catch (const std::invalid_argument& e) {
            cout << "trying to find 6 in the deque " << endl;
            cerr << e.what() << endl;
        }
    }
    cout << endl << endl;
	cout << "Please Enter to continue" << endl;
    getline(std::cin, input);

    cout << "------------------------------------------------------"<< endl;
    cout << "   Congratulations that you PASSED all the test !" << endl;
    cout << "------------------------------------------------------"<< endl << endl;
    
    return 0;
}   