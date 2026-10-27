#include <iostream>
#include "test.hpp"
using namespace std;
void Adder::input()
{
    cout << "Input :";
    cin >> a;
    cout << "Input :";
    cin >> b;
}
void Adder::add(){sum = a+b;}
void Adder::print()
{cout << "max :" << sum << endl;}
