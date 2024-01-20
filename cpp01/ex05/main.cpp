#include "Harl.hpp"

int main(void)
{
    Harl example;
    cout << "\nharl 2.0" << endl;
    example.complain("debug");
    cout << endl;
    example.complain("info");
    cout << endl;
    example.complain("warning");
    cout << endl;
    example.complain("error");
    cout << endl;
    return (0);
}