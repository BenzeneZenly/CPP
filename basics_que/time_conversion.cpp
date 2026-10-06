#include <iostream>
using namespace std;

int main()
{
    int seconds, hours, minutes;

    cout << "Enter the total seconds: ";
    cin >> seconds;

    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    seconds = seconds % 60;

    cout << hours << " hours " << ": " << minutes << " minutes " << ": " << seconds << " seconds" << endl;
    return 0;
}