/* Problem #353. Sum of powers
Input data
A natural number N is introduced that does not exceed 30.

Output data
Calculate 1+2+2 2 +2 3 +…+2 N .
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int value;
    cin >>value;
    int sum = 0;
    for(int i = 0; i <= value; i++){
        sum += pow(2, i);
    }
    cout << sum;
    return 0;
}
