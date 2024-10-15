/* Problem #320. Sum - 1
Given a number n, calculate the sum 1+1/2^2 +1/3^2 +...+1/ n^2 .

Input data
One number n is entered , not exceeding 100000.

Output data
It is necessary to display the sum value.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int value;
  cin >> value;
  double sum = 1;
  for(int i = 2 ; i <= value; i++){
    sum += 1/pow(i, 2);
  }

  cout << sum;

  return 0;
}