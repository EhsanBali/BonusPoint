/*
Problem #106. Number of words
Given a string containing spaces, find how many words it contains (a word is a sequence of non-space characters, words are separated by one space, the first and last characters of the string are not spaces).

Input data
Several lines are fed to the input.

Output data
It is necessary to display the number of words in the first of the entered lines.
*/
#include <iostream>
using namespace std;

int main(){
  string sentence;
  getline(cin, sentence);
  int cnt = 0;
  for (int i = 0; i < sentence.length(); i++) {
    if (sentence[i] == ' ') {
      cnt++;
    }
  }
  cout << cnt + 1;
  return 0;
}