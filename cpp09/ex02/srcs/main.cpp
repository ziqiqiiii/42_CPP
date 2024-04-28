#include "../headers/PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc < 2) {
		cerr << "Error: Invalid arguments" << endl;
		return EXIT_FAILURE;
	}
	try {
		PmergeMe pm(argv);
	} catch (std::exception& e) {
		cerr << "Error: " << e.what() << endl;
		return EXIT_FAILURE;
	}
    return EXIT_SUCCESS;
}