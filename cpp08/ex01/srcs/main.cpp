#include "../headers/Span.hpp"

int main()
{
    {
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << "                 Test case 1: Testing with the provided example                 " << endl;
        cout << "--------------------------------------------------------------------------------" << endl;
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << "sp            : " << sp << std::endl;
        std::cout << "shortest Span : " << sp.shortestSpan() << std::endl;
        std::cout << "longest Span  : " << sp.longestSpan() << std::endl;

    }
    cout << endl << endl;
	cout << "Please Enter to continue" << endl;
	string input;
    getline(std::cin, input);
    {
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << "                  Test case 2: Testing with a Span of size 1                    " << endl;
        cout << "--------------------------------------------------------------------------------" << endl;

        try {
            Span sp = Span(1);
            sp.addNumber(6);

            std::cout << "sp            : " << sp << std::endl;
            std::cout << "shortest Span : " << sp.shortestSpan() << std::endl;
            std::cout << "longest Span  : " << sp.longestSpan() << std::endl;
        } catch (const std::exception& e) {
            cout << e.what() << endl;
        }
    }
    cout << endl << endl;
	cout << "Please Enter to continue" << endl;
    getline(std::cin, input);
    {
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << "             Test case 3: Testing with a large number of elements               " << endl;
        cout << "--------------------------------------------------------------------------------" << endl;

        try {
            const int size = 10000;
            Span sp = Span(size);
            for (int i = 1; i <= size; ++i) {
                sp.addNumber(i);
            }
            cout << "Span from 1 to 1000" << endl << endl;
            std::cout << "shortest Span : " << sp.shortestSpan() << std::endl;
            std::cout << "longest Span  : " << sp.longestSpan() << std::endl;
        } catch (const std::exception& e) {
            cout << e.what() << endl;
        }
    }
    cout << endl << endl;
	cout << "Please Enter to continue" << endl;
    getline(std::cin, input);
    {
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << "                   Test case 4: Testing adding lots of number                   " << endl;
        cout << "--------------------------------------------------------------------------------" << endl;

        try {
            Span sp = Span(5);
            std::vector<int> numbersToAdd;
            numbersToAdd.push_back(6);
            numbersToAdd.push_back(3);
            numbersToAdd.push_back(17);
            numbersToAdd.push_back(9);
            numbersToAdd.push_back(11);
            sp.addNumber(numbersToAdd.begin(), numbersToAdd.end());

            std::cout << "sp            : " << sp << std::endl;
            std::cout << "shortest Span : " << sp.shortestSpan() << std::endl;
            std::cout << "longest Span  : " << sp.longestSpan() << std::endl;
        } catch (const std::exception& e) {
            cout << e.what() << endl;
        }
    }
    cout << endl << endl;
	cout << "Please Enter to continue" << endl;
    getline(std::cin, input);
    {
        cout << "--------------------------------------------------------------------------------" << endl;
        cout << "    Test case 5: Testing when trying to add more numbers than the Span size     " << endl;
        cout << "--------------------------------------------------------------------------------" << endl;
        
        try {
            Span sp = Span(3);

            sp.addNumber(6);
            sp.addNumber(3);
            sp.addNumber(17);
            sp.addNumber(9);
            
            std::cout << "shortest Span : " << sp.shortestSpan() << std::endl;
            std::cout << "longest Span  : " << sp.longestSpan() << std::endl;
        } catch (const std::exception& e) {
            cout << e.what() << endl;
        }
    }
    cout << endl << endl;
	cout << "Please Enter to continue" << endl;
    getline(std::cin, input);

    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "                           All tests passed successfully!                      " << endl;
    cout << "--------------------------------------------------------------------------------" << endl;

    return 0;

}   