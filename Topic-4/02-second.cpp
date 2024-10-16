/* 
Task #104. Change the case of a character
Change the case of a character if it was a Latin letter: make it uppercase if it was a lowercase letter and vice versa. To do this, write a separate function that changes the case of a character.

Input data
The only character specified is C.

Output data
It is necessary to output the resulting symbol.
*/
#include <iostream>
using namespace std;

int main() {
  char value;
  cin >> value;
  if (value >= 'a' && value <= 'z'){
    value = value - 32;
    cout << value;
    return 0;
  }
  // seperate functions
  if(value >= 'A' && value <= 'Z'){
    value = value + 32;
    cout << value;
    return 0;
  }

  return 0;
}