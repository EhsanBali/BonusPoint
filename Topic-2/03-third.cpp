/* 
Problem No. 2959. Number sign
Data input and output is performed through standard input/output streams.
In mathematics, the function sign(x) (sign of a number) is defined as follows:
sign(x) = 1 if x > 0,
sign(x) = -1 if x < 0,
sign(x) = 0 if x = 0.

For a given number x, print the value of sign(x).
Input data
The number x is entered.

Output data
Output the answer to the problem.
*/
#include <iostream>
using namespace std;

int main(){
  int value;
  cin >> value;
  if(value > 0){
    cout << "1" << endl;
  }else if(value < 0){
    cout << "-1" << endl;
  }else{
    cout << "0";
  }

  return 0;
}