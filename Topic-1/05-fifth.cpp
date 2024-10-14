// Problem #2942. The tens place of a two-digit number
#include <iostream>
using namespace std;

int main(){
  int value;
  cin >> value;

  if(value / 100 == 0){
    value = value / 10;
    cout << value << endl;
    return 0;
  }else{
    cout << "Enter a 2-digit number";
  }
  cout << value / 100;
  return 0;
}