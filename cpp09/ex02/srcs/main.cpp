#include "../headers/PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc < 2) {
		cerr << "Error: Invalid arguments" << endl;
		return EXIT_FAILURE;
	}
	try {
		PmergeMe pm;
		string num = pm.ArrayToString(argv);
		pm.checkPositiveNum(num);
		vector<int> vec = pm.StringToVector(num);
		list<int> lst = pm.StringToList(num);
	} catch (std::exception& e) {
		cerr << "Error: " << e.what() << endl;
		return EXIT_FAILURE;
	}
    return EXIT_SUCCESS;
}