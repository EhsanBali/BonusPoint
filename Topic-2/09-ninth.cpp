/*Problem #295. Does a triangle exist?
Data input and output is performed through standard input/output streams.
Input data
Given three natural numbers a , b , c , written in separate lines, determine whether there is a non-degenerate triangle with such sides.

Output data
If the triangle exists, print the string YES, otherwise print the string NO
*/
#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if(a+b > c){
    if(a+c > b){
      if(b+c > a){
        cout << "YES";
        return 0;
      }
    } 
  }
  cout << "NO";
  return 0;
}
