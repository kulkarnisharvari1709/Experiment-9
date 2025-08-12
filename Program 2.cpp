// This program demonstrates the use of pointers in C++

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *aptr;
    aptr = &a;

    cout << a << endl;        // prints value of a
    cout << aptr << endl;     // prints address stored in pointer (address of a)
    cout << *aptr << endl;    // prints value at address stored in pointer (value of a)
    cout << &a << endl;       // prints address of a

    return 0;
}
