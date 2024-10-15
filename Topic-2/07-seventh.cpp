/* Problem #264. Ice cream
Ice cream is sold in three-scoop and five-scoop ice cream cafes. Is it possible to buy exactly k scoops of ice cream?

Input data
A number k is entered (integer, positive)

Output data
The program should output the word YES if under these conditions it is possible to collect exactly k balls (no more and no less), otherwise it should output NO.
*/
#include <iostream>
using namespace std;

int main() {
    int k;
    cin >> k;

    for (int y = 0; y <= k / 5; ++y) {
        if ((k - 5 * y) % 3 == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }
    
    cout << "NO" << endl;
    return 0;
}
