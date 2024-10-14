// Problem #2944. Sum of digits
#include <iostream>
using namespace std;

int main(){
  int value, sum = 0;
  cin >> value;

  while(value>0){
    sum += value % 10;
    value /= 10;
  }
  cout << sum;

  return 0;
}