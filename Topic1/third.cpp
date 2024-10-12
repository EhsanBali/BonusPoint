// Problem #2938. Apples division - 1 and 2
#include <iostream>
using namespace std;

int main(){
  int children, apples, result, remainder;
  cout << "How many child : ";
  cin >> children;
  cout << "How many apple : ";
  cin >> apples;

  result = apples / children;
  remainder = apples - (result*children);

  cout << result << endl; //Each child gets how many apple
  cout << remainder << endl; // Remainder after all children gets the apples
  
  return 0;
}