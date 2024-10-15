/* 
Problem #352. Degree
Write a program to calculate 2 N .

Input data
A non-negative integer N is entered that does not exceed 30.

Output data
Print the number 2 N .
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int value;
  cin >> value;
  // cout << pow(2, value ) << endl;     easy way

  int result = 2;

  // for(int i = 1; i < value; i++){       hard way
  //   result *= 2;
  // }
  cout << result;

  return 0;
}