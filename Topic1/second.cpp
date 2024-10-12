// Problem #2937. Next and Previous
#include <iostream>
using namespace std;

int main() {
  int value;
  cin >> value;
  cout << "The next number for the number " << value << " is " << value + 1 << endl;
  cout << "The previous number for the number " << value <<" is " << value - 1 <<endl;

  return 0;
}