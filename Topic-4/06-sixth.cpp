/*Problem #108. Is the word a palindrome?.
Given a string, determine whether it is a palindrome (that is, whether it can be read backwards).

Input data
The input is 1 line without spaces.

Output data
It is necessary to output  yes if the string is a palindrome, and no otherwise.
*/
#include <iostream>
#include <cmath>
using namespace std;
bool check(const string &sentence){
  int left = 0, right = sentence.length() -1;
  while (left < right) {
    if (sentence[left] != sentence[right]) {
      return false;
    }
    left++;
    right--;
  }
  return true;
}

int main(){
  string sentence;
  getline(cin, sentence);

  if(check(sentence)){
    cout << "yes";
  }else {
    cout << "no";
  }

  return 0;
}