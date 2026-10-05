#include <iostream>
using namespace std;

int main()
{
    // TYPE CONVERSION
    char grade = 'A';

    int value = grade;
    cout << "The ASCII Value of A is: " << value << endl;

    // TYPE CASTING(EXPLICIT)
    double price = 100.99;
    int newPrice = (int)price;
    cout << "The new price is :" << newPrice << endl;

    return 0;
}