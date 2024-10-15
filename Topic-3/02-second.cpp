/* 
Problem No. 351. Factorial
Calculate N ! ("n-factorial") – the product of all natural numbers from 1 to N ( N !=1∙2∙3∙…∙ N ).

Input data
A single number N is introduced – it is natural and does not exceed 12.

Output data
Print the obtained value of N !
*/
#include <iostream>
using namespace std;

int main() {
  int value;
  cin >> value;
  int factorial = 1;
  for (int i = 1; i <= value; i++) {
    factorial *= i;
  }
  cout << factorial << endl;
  return 0;
}