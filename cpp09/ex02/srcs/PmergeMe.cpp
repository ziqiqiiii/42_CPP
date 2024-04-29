#include "../headers/PmergeMe.hpp"


//**************************************
//        FORWARD DECLARATIONS
//**************************************

template <typename Iterator>
void fordJohnsonSort(Iterator begin, Iterator end);
template <typename Iterator>
void InsertionSort(Iterator begin, Iterator end);
template <typename T>
void display(const T& container);
template<typename T>
void sortAndMeasure(T& container);
template <typename T>
T StringToContainer(const string& input);

string getcontainertype(const vector<int>&);
string getcontainertype(const list<int>&);
string getcontainertype(const deque<int>&);

//=========================
//ORTHODOX COCANICAL FORM
//=========================
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


PmergeMe::PmergeMe(char **argv)
{
    string num = this->ArrayToString(argv);
    this->checkPositiveNum(num);
    vector<int> vec = StringToContainer<vector<int> >(num);
    list<int> lst = StringToContainer<list<int> >(num);
    deque<int> deq = StringToContainer<deque<int> >(num);
    sortAndMeasure(vec);
    sortAndMeasure(lst);
    sortAndMeasure(deq);
}

//=========================
//MEMBER FUNCTION
//=========================
void PmergeMe::checkPositiveNum(string input)
{
    for (size_t i = 0; i < input.size(); i++){
    
        if (input[i] == ' ' || input[i] == '\t' || input[i] == '\n')
            i++;
        if ((input[i]) && (!std::isdigit(input[i]))) {
            throw std::runtime_error("Invalid arguments");
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

//=========================
// FUNCTION TEMPLATES
//=========================
template <typename Iterator>
void fordJohnsonSort(Iterator begin, Iterator end)
{
    int size = std::distance(begin, end);
    if (size < 2) return;

    Iterator mid = begin;
    std::advance(mid, size / 2);
    Iterator left = begin;
    Iterator right = mid;

    // Step 1: Compare and sort pairs
    while (right != end && left != mid) {
        if (*right < *left) {
            std::swap(*left, *right);
        }
        ++left;
        if (right != end) {
            std::advance(right, 1);
            if (right == end) break;
        }
    }

    // Recursive sort for both halves
    fordJohnsonSort(begin, mid);
    fordJohnsonSort(mid, end);

    InsertionSort(begin, end);
}

template <typename Iterator>
void InsertionSort(Iterator begin, Iterator end) {
    for (Iterator i = begin; i != end; ++i) {
        Iterator j = i;
        while (j != begin) {
            Iterator k = j;
            --k;
            if (*j < *k) {
                std::swap(*j, *k);
                j = k;
            } else {
                break;
            }
        }
    }
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
    cout << "Before  :";
    display(container);

    std::clock_t start = std::clock();
    // Assuming fordJohnsonSort is correctly defined to sort data
    fordJohnsonSort(container.begin(), container.end());  
    std::clock_t end = std::clock();

    cout << "After   :";
    display(container);

    double elapsed = double(end - start) / CLOCKS_PER_SEC * 1000000;  // Convert to microseconds
    std::cout << "Time to process a range of  " << container.size() << " with " << getcontainertype(container) << " :" << elapsed << " microseconds.\n";
}

template <typename T>
T StringToContainer(const string& input)
{
    std::istringstream iss(input);
    string num;
    T container;
    while (iss >> num) {
        container.push_back(std::atoi(num.c_str()));
    }
    return container;
}

string getcontainertype(const vector<int>&) {
    return "std::vector<int>";
}

string getcontainertype(const list<int>&) {
    return "std::list<int>  ";
}

string getcontainertype(const deque<int>&) {
    return "std::deque<int>  ";
}