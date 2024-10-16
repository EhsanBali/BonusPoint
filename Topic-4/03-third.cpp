/* 
Problem #105. Do the lines match?
Write a function bool Compare(string S1, string S2)to determine whether two strings are the same.

Input data
2 lines are given.

Output data
It is necessary to output the word yesif the lines match, and the word nootherwise.
*/
#include <iostream>
using namespace std;
bool compare(string value1, string value2);

int main(){
  string value1, value2;
  cin >> value1 >> value2;
  if(compare(value1, value2)){
    cout << "yes"; 
  }else{
    cout << "no";
  }

  return 0;
}
bool compare(string value1, string value2){
  return value1 == value2;
}