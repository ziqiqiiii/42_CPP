#ifndef PMERGEME
# define PMERGEME

#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <climits>
#include <exception>
#include <string>
#include <algorithm>
#include <stack>
#include <stdexcept>
#include <ctime>

#include <vector>
#include <list>

using std::cout;
using std::endl;
using std::cerr;
using std::string;

using std::vector;
using std::list;

class PmergeMe
{
    public:
        //=========================
        //ORTHODOX COCANICAL FORM
        //=========================
        PmergeMe();
        PmergeMe(char **argv);
        PmergeMe(const PmergeMe& other);
        PmergeMe& operator=(const PmergeMe& other);
        ~PmergeMe();

        //=========================
        //MEMBER FUNCTION
        //=========================
        void checkPositiveNum(string input);
        string ArrayToString(char **argv);
};

#endif
