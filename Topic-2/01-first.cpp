// Problem #292. Maximum of two numbers
// Data input and output is performed through standard input/output streams.
// Input data
// Two integers are given, each number is written on a separate line.

#include <iostream>
using namespace std;

int main() {
    int first, second;
    cin >> first >> second;
    if ( first > second)
        cout << first;
    else
        cout << second; 
    return 0;
}
