/*
Problem #294. Maximum of three
Data input and output is performed through standard input/output streams.
Input data
Three integers are given, each written on a separate line.

Output data
Print the largest of the given numbers (the program must print exactly one integer).
*/
#include <vector>
#include <iostream>
using namespace std;

int main(){
  int a, b, c;
  cin >> a >> b >> c;
  if(a>b && a>>c){
    cout << a;
  }else if(b>a && b>c){
    cout << b;
  }else if(c>a && c>b){
    cout << c;
  }


  /* 
  Here it is with a loop
  vector<int> temp;
  int value;
  for(int i =0; i < 3;i++){
    cin >> value;
    temp.push_back(value);
    }
  int max = temp[0];
  for(int i = 0; i < 3; i++){
    if(temp[i] > max){
      max = temp[i];
      }
    }
  cout << max;  
  */ 

  return 0;
}