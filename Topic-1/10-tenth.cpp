// Problem #2957. Check divisibility
// You are given two natural numbers n and m . If one of them is divisible by the other, print 1, otherwise print any other integer.

// When solving this problem, you cannot use the if statement or loops.

#include <iostream>
using namespace std;

int Div(int n, int m) {
    return (n % m == 0) * 1 + (m % n == 0) * 1 - 1;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << Div(n, m) << endl;
    return 0;
}
