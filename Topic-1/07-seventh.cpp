// Problem #2947. Electronic clock - 1
#include <iostream>
using namespace std;

int main(){
  int value, hour, minute;
  cin >> value;

  while(value > 0){
    hour++;
    minute = value;
    value -= 60;
  }
  if(hour >= 24)
    hour -= 25;

  cout << hour << " " << minute;
  return 0;
}