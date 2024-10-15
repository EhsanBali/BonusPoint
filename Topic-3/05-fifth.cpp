/*
Problem #319. Geometric progression
Given a real number a and a natural number n, calculate the sum 1+ a + a 2 +...+ a n without using the formula for the sum of a geometric progression. The program's running time should be proportional to n .

Input data
Two numbers are entered - a and n .

Output data
It is necessary to display the sum value
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int value, power;
  cin >> value >> power;
  int sum = 1;

  for(int i = 1; i <= power; i++){
    sum = sum + pow(value, i);
  }

  cout << sum;
  return 0;
}