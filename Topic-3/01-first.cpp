/* 
Problem #315. Sum of squares
Data input and output is performed through standard input/output streams.
Given a natural number n, calculate the sum 1 2 +2 2 +...+ n 2 .

Input data
A single natural number n is introduced that does not exceed 100.

Output data
It is necessary to withdraw the calculated amount.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int value;
    cin >> value;
    int sum = 0;
    for(int i = 1; i <= value; i++){
        sum += pow(i, 2);
    }
    cout << sum << endl;

    return 0;
}
