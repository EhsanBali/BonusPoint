/*
Problem #293. Which number is greater?
Data input and output is performed through standard input/output streams.
Input data
Two integers are given, each written on a separate line.

Output data
The program should print the number 1 if the first number is greater than the second, the number 2 if the second is greater than the first, or the number 0 if they are equal.
*/
#include <iostream>
using namespace std;

int main(){
  int A,B;
  cin >> A >> B;

  if(A>B){
    cout << A;
  }else if(A<B){
    cout << B;
  }else{
    cout << "0";
  }
  return 0;
}