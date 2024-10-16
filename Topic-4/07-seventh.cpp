/*Problem #110. Finding a substring
Given two strings, determine whether the first string is a substring of the second string.

Input data
The input is 2 strings of length no more than 10000, consisting only of small Latin letters.

Output data
You must output the word yesif the first string is a substring of the second string, or the word nootherwise.
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string sub, main;
    cin >> sub >> main;

    if(main.find(sub) != string::npos){
        cout << "yes";
    }else{
        cout << "no";
    }

    return 0;
}
