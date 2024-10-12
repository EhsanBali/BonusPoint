/* Problem #2951. Purchase Cost
A pie in a canteen costs a Tenge and b Tyin. Determine how many Tenge and Tyin you need to pay for n cakes.
*/
#include <iostream>
using namespace std;

int main() {
  int tenge, tyin, cakes;
  cin >> tenge >> tyin >> cakes;

  tenge *= cakes;
  tyin *= cakes;

  tenge += tyin / 100;
  tyin %= 100;

  cout << tenge << " " << tyin << endl;
  return 0;
}
