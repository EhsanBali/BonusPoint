/* 
Problem #120. 1/0!+1/1!+1/2!+...
Given a natural number N, find the sum of the numbers 1+1/1!+1/2!+1/3!+...+1/N!. The number of actions must be proportional to N.

Input data
A single number N is given

Output data
It is necessary to output the calculation result as a real number with an accuracy of up to 5 decimal places.
*/
#include <iostream>
using namespace std;

int main() {
    int value;
    cin >> value;
    int sum = 0;
    for(int i=0 ; i<= value; i++){
        int temp = 1;
        for(int j =1 ; j <=i; j++){
            temp *= j;
        }
        sum += 1/temp;
    } 
    cout << sum << endl;
    return 0;
}

