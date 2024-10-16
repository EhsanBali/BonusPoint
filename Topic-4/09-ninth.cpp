/*Problem #1415. Julia's Cipher
Julius Caesar used his own method of text encryption. Each letter was replaced by the next one in the alphabet through K positions in a circle. It is necessary to determine the original text from the given encryption.

Input data
The first line contains a cipher consisting of capital Latin letters. The second line contains the number K (1 ≤ K ≤ 10).

Output data
It is required to output the decryption result.
*/
#include <iostream>
#include <string>
using namespace std;

// I did use ChatGPT for some parts of this task i do admit it bc it was a little hard for me :)

int main() {
    string sentence;
    int K;
    getline(cin, sentence);
    cin >> K;

    string result = "";

    for (char ch : sentence) {
        if (ch >= 'A' && ch <= 'Z') {
            char Char_result = (ch - 'A' - K + 26) % 26 + 'A';
            result += Char_result;
        } else {
            result += ch;
        }
    }
    cout << result;

    return 0;
}

