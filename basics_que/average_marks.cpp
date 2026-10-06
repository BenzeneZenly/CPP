#include <iostream>
using namespace std;

int main()
{
    int maths, python, cpp;

    cout << "Enter the marks obtained in maths:  " << endl;
    cin >> maths;
    cout << "Enter the marks obtained in python:  " << endl;
    cin >> python;
    cout << "Enter the marks obtained in cpp:  " << endl;
    cin >> cpp;

    // Total marks obtained by student in the three subjects
    int total = maths + python + cpp;
    cout << "Total marks obtained by the student:  " << total << endl;

    // Average marks obtained by student in the three subjects
    float average = total / 3.0;
    cout << "Average marks obtained by the student:  " << average << endl;

    return 0;
}