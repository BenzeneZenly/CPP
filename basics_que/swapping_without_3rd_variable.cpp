#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the value of a: " << a << endl;
    cin >> a;
    cout << "Enter the value of b: " << b << endl;
    cin >> b;

    // Before swapping
    cout << "Before swapping: " << "a = " << a << ", " << "b = " << b << endl;

    // Swapping without using third variables
    a = a + b; // add both no.s store it in "a"
    b = a - b;
    a = a - b;

    cout << "After swapping: " << "a = " << a << ", " << "b = " << b << endl;

    return 0;
}