#ifndef RPN_HPP
# define RPN_HPP

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

using std::cout;
using std::endl;
using std::cerr;
using std::string;
using std::stack;

class RPN
{
	private:
		stack<int> _operants;
	public:
		//=========================
        //ORTHODOX COCANICAL FORM
        //=========================
		RPN();
		~RPN();
		RPN(const RPN& other);
		RPN& operator=(const RPN& other);

		//=========================
        //MEMBER FUNCTION
        //=========================
		int	evaluate(string expression);
		int	applyOperation(int a, int b, char op);

};

# endif 