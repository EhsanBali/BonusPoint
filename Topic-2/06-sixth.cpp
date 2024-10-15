/* Task #262. Submission
The product costs a rub. b kopecks. It was paid for by c rub. d kopecks. How much change do you need to get?

Input data
4 numbers are entered: a , b , c and d .

Output data
It is necessary to output 2 numbers: e and f , the number of rubles and kopecks, respectively.
*/
#include <iostream>
using namespace std;

int main(){
  int cost, cost2 , tenge, tyin;
  cin >> cost >> cost2 >> tenge >> tyin;
  int result = 0, sresult = 0;
  if(cost < tenge || tenge == cost){
    if(tyin < cost2 && tenge-1 > cost){
      tyin = 100;
      tenge = tenge -1;
      result = tenge - cost;
      sresult = tyin - cost2;
    }else{
      result = tenge - cost;
      sresult = tyin - cost2;
    }
    cout << result << " " << sresult << endl;
    
  }else{
    cout << "Not enough budget";
  }
  return 0;
}