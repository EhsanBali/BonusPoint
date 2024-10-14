/* 
Problem #2949. Exchange of values
Write a program that reads the values ​​of two integer variables a and b , then swaps their values ​​(that is, variable a should contain what was previously stored in b , and variable b should contain what was previously stored in a ). Then print the values ​​of the variables.
*/
#include <iostream>
using namespace std;

int main(){
  int a, b;
  cin >> a >> b;
  a = a + b;
  b = a - b;
  a = a - b;

  cout << a << " " << b;

  return 0;
}