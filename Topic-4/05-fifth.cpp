/*
Problem #107. The longest word
Given a string containing spaces. Find the longest word in it, output this word and its length. If there are several such words, output the first one.


Input data
A single line containing spaces is given. Words are separated by exactly one space. Spaces at the beginning and end of the line are allowed.

Output data
It is necessary to output the longest word in the line and its length.
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
  string sentence;
  getline(cin, sentence);
  string word = "";
  int length = 0;
  string temp = "";

  for(int i = 0; i <= sentence.length(); i++){
    if(sentence[i] == ' ' || i == sentence.length()){
      if(temp.length() > length){
        word = temp;
        length = temp.length();
      }
      temp = "";
    }else{
      temp += sentence[i];
    }
  }

  cout << word << endl << length; 
  return 0;
}