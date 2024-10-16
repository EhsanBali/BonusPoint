/*
Problem #1421. Remove spaces.
Given a string, you need to convert all consecutive spaces into one.

Input data
The line length does not exceed 1000.

Output data
Print the modified string.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    getline(cin, sentence);
    string result;
    bool last = false; 

    for (char c : sentence) {
        if (c == ' ') {
            if (!last) {
                result += c;
                last = true;
            }
        } else {
            result += c;
            last = false;
        }
    }

    if (!result.empty() && result[0] == ' ') {
        result.erase(0, 1); 
    }

    cout << result;
    return 0;
}

