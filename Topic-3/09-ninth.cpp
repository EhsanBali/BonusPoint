/*Problem #333. Even numbers
Input data
Integers a and b are entered . It is guaranteed that a does not exceed b

Output data
Print (separated by spaces) all even numbers from a to b (inclusive).
*/
#include <iostream>
using namespace std;

int main() {
  int start, end;
  cin >> start >> end;
  for (int i = start; i <= end; i++) {
    if (i % 2 == 0) {
      cout << i << " ";
    }
  }
  return 0;
}
