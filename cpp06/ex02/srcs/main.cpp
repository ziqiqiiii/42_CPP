#include "../headers/a.hpp"
#include "../headers/b.hpp"
#include "../headers/c.hpp"
#include "../headers/base.hpp"

Base* generate()
{
    srand(time(0));
    switch (rand() % 3)
    {
        case 0:
            return new A();
        case 1:
            return new B();        
        default :
            return new C();
    }
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        cout << "A" << endl;
    else if (dynamic_cast<B*>(p))
        cout << "B" << endl;
    else if (dynamic_cast<C*>(p))
        cout << "C" << endl;
    else
        cerr << "Unknown" << endl;
}

void identify(Base& p)
{
	try {
		dynamic_cast<A&>(p);
		cout << "A" << endl;
	} catch (const std::bad_cast& e) {
		try {
			dynamic_cast<B&>(p);
			cout << "B" << endl;
		} catch (std::bad_cast&) {
            try {
                dynamic_cast<C&>(p);    
			    cout << "C" << endl;
            }
            catch (std::bad_cast&) {
                cerr << "Unknown" << endl;
            }
		}
	}
}

int main()
{
    try {
        Base *result = generate();

        identify(result);
		identify(*result);
        delete result;
    } catch (const std::exception& e) {
        cerr << "Error: " << e.what() << endl;
    }
    return 0;
}