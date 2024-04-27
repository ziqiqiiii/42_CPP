#include "../headers/PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& other)

{
    *this = other;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
    if (this != &other)
        *this = other;
    return *this;
}

PmergeMe::~PmergeMe() {}

template <typename Iterator>
void fordJohnsonSort(Iterator begin, Iterator end)
{
    (void)begin;
    (void)end;
}

void PmergeMe::checkPositiveNum(string input)
{
    for (size_t i = 0; i < input.size(); i++){
    
        if (input[i] == ' ' || input[i] == '\t' || input[i] == '\n')
            i++;
        if ((input[i]) && (!std::isdigit(input[i]))) {
            throw std::runtime_error("Invalid Input");
        }
    }
}

string PmergeMe::ArrayToString(char **argv)
{
    int i = 0;
    std::ostringstream oss;
    while (argv[++i]) {
        int j = -1;
        while (argv[i][++j]) {
            oss << argv[i][j];
        }
        oss << " ";
    }
    return oss.str();
}

vector<int> PmergeMe::StringToVector(string num)
{
    /* for (size_t i = 0; i < num.size(); i++) {
        while (num[i] == ' ' || num[i] == '\t' || num[i] == '\n')
            i++;
    } */
    vector<int> vec(num.begin(), num.end());
    return vec;
}

list<int> PmergeMe::StringToList(string num)
{
    list<int> lst(num.begin(), num.end());
    return lst;
}


template <typename Iterator>
void InsertionSort(Iterator begin, Iterator end)
{
    (void)begin;
    (void)end;
}

template <typename T>
void display(const T& container)
{
    typename T::const_iterator it;

    for (it = container.begin(); it != container.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

template<typename T>
void sortAndMeasure(T& container) {
    cout << "Before :" << PmergeMe::display(container) << endl;
    std::clock_t start = std::clock();
    // Assuming fordJohnsonSort is correctly defined to sort data
    fordJohnsonSort(container.begin(), container.end());  
    std::clock_t end = std::clock();
    cout << "After  :" << PmergeMe::display(container) << endl;

    double elapsed = double(end - start) / CLOCKS_PER_SEC * 1000000;  // Convert to microseconds
    std::cout << "Time to process a range of  " << container.size() << "with std:: " << container << " :" << elapsed << " microseconds.\n";
}
