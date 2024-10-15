/*
Problem #339. Minimum divisor
Find the smallest natural divisor of a number x other than 1 (2 <= x <= 30000).

Input data
A natural number x is introduced .

Output data
Print the smallest divisor of the number x that is different from 1.
*/

#include <iostream>
using namespace std;

int main() {
    int value;
    cin >> value;
    for (int i = 2; i <= value; i++) {
        if (value % i == 0) {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}
