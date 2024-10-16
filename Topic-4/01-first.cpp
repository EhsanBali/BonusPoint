/* 
Problem #103. Convert a symbol to uppercase
Write a function unsigned char ToUpper(unsigned char c) (C/C++), function ToUpper(c:char):char (Pascal), which converts the given character to uppercase.

Input data
One character c is given .

Output data
If the character is a lowercase Latin letter (i.e. a letter from a to z), print the equivalent uppercase letter instead, otherwise print the same character (this operation is called "uppercase").
*/
#include <iostream>
using namespace std;

int main(){
  char value;
  cin >> value;
  if (value >= 'a' && value <= 'z'){
    value = value - 32;
  }

  cout << value;

  return 0;
}
