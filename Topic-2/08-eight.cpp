/* 
Problem #266. Coordinate Quarters
Data input and output is performed through standard input/output streams.
Given the coordinates of two points on a plane, it is required to determine whether they lie in the same coordinate quadrant or not (all coordinates are different from zero).

Input data
Four numbers are entered: the coordinates of the first point ( x 1 , y 1 ) and the coordinates of the second point ( x 2 , y 2 ).

Output data
The program should output the word YES if the points are in the same coordinate quadrant, otherwise output the word NO.
*/
#include <iostream>
using namespace std;

int main() {
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    // i used ternary operator for this problem :)

    int quadrant1 = (x1 > 0 && y1 > 0) ? 1 : (x1 < 0 && y1 > 0) ? 2 :
                    (x1 < 0 && y1 < 0) ? 3 : (x1 > 0 && y1 < 0) ? 4 : 0;

    int quadrant2 = (x2 > 0 && y2 > 0) ? 1 : (x2 < 0 && y2 > 0) ? 2 :
                    (x2 < 0 && y2 < 0) ? 3 : (x2 > 0 && y2 < 0) ? 4 : 0;

    if (quadrant1 == quadrant2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

