#include <iostream>
using namespace std;

int main()
{
    // ARITHMETIC OPERATORS
    int a = 10;
    int b = 5;

    cout << "a + b = " << a + b << endl; // Addition
    cout << "a - b = " << a - b << endl; // Subtraction
    cout << "a * b = " << a * b << endl; // Multiplication
    cout << "a / b = " << a / b << endl; // Division
    cout << "a % b = " << a % b << endl; // Modulus

    int a2 = 5;
    double b2 = 2;
    cout << "a2 / b2 = " << a2 / b2 << endl;

    cout << ("10 / (double)3 = ") << endl;

    int ans = (5 / (double)3);
    cout << ans << endl;

    // ASSIGNMENT OPERATORS
    int c = 10;
    c += 5; // c = c + 5
    cout << "c += 5: " << c << endl;
    c -= 3; // c = c - 3
    cout << "c -= 3: " << c << endl;
    c *= 2; // c = c * 2
    cout << "c *= 2: " << c << endl;
    c /= 4; // c = c / 4
    cout << "c /= 4: " << c << endl;
    c %= 3; // c = c % 3
    cout << "c %= 3: " << c << endl;

    // RELATIONAL OPERATORS
    int x = 10;
    int y = 5;
    cout << "x == y: " << (x == y) << endl; //
    cout << "x != y: " << (x != y) << endl; //
    cout << "x > y: " << (x > y) << endl;   //
    cout << "x < y: " << (x < y) << endl;   //
    cout << "x >= y: " << (x >= y) << endl; //
    cout << "x <= y: " << (x <= y) << endl; //

    // LOGICAL OPERATORS
    bool p = true;
    bool q = false;
    cout << "p && q: " << (p && q) << endl; //
    cout << "p || q: " << (p || q) << endl; //
    cout << "!p: " << (!p) << endl;         //

    // BITWISE OPERATORS
    int m = 5;                              // 0101 in binary
    int n = 3;                              // 0011 in binary
    cout << "m & n: " << (m & n) << endl;   //
    cout << "m | n: " << (m | n) << endl;   //
    cout << "m ^ n: " << (m ^ n) << endl;   //
    cout << "~m: " << (~m) << endl;         //
    cout << "m << 1: " << (m << 1) << endl; //
    cout << "m >> 1: " << (m >> 1) << endl; //

    return 0;
}