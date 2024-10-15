/*
Problem #302. Triangle type
Determine the type of triangle (acute, obtuse, right) with the given sides.

Input data
Three natural numbers are given – the sides of a triangle.

Output data
You must output one of the words: right for a right triangle, acute for an acute triangle, obtuse for an obtuse triangle, or impossible if the input numbers do not form a triangle.
*/

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int side[3]= {a, b, c};
    sort(side, side+3);
    a = side[0];
    b = side[1];
    c = side[2];

    if(a+b <= c){
        cout << "Not a triangle";
    }else{
        if(pow(a,2) + pow(b, 2) == pow(c, 2)){
            cout << "right";
        }else if(pow(a, 2) + pow(b, 2) > pow(c, 2)){
            cout << "Acute";
        }else if(pow(a, 2) + pow(b, 2) < pow(c, 2)){
            cout << "Obtuse";
        }        
    }
    return 0;
}
