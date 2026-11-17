#include <iostream>
#include "aa.hpp"
using namespace std;
int main() {
    Queue<int> i;
    i.enqueue(10);
    i.enqueue(20);
    i.enqueue(30);
    cout << i.dequeue() << endl;
    cout << i.dequeue() << endl;
    cout << i.dequeue() << endl;
    Queue<double> d;
    d.enqueue(3.14);
    d.enqueue(6.28);
    cout << d.dequeue() << endl;
    cout << d.dequeue() << endl;
    Queue<char> c;
    c.enqueue('a');
    c.enqueue('b');
    cout << c.dequeue() << endl;
    cout << c.dequeue() << endl;
    return 0;
}
