#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    float katet1, katet2;
    cin >> katet1 >> katet2;

    /* 
    this is for manual calculation of hypotenuse 
    float hyp;
    hyp = pow(katet1,2) + pow(katet2, 2);
    hyp = sqrt(hyp);
    */

    float hyp = hypot(katet1, katet2);
    cout << fixed << setprecision(2) << hyp;

    return 0;
}
