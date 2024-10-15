/*
Problem #317. Number of combinations
Given natural numbers n and k, calculate the value Ckn=n !k ! ( n − k ) !
(the number of combinations of n elements by k ).

Input data
Two numbers are entered - n and k (n , k ≤ 10
).

Output data
It is necessary to output the valueCkn
.


*/
#include <iostream>
using namespace std;

int main(){
  int n, k;
  cin >> n >> k;

  int facn = 1;
  int fack = 1;
  int final = 1;

  for(int i =1; i <= n; i++){
    facn *= i;
  }

  for(int i =1; i <= k; i++){
    fack *= i;
  }
  
  for(int i =1; i <= n-k; i++){
    final *= i;
  }

  int result = facn/(fack * final);

  cout << result;

  return 0;
}