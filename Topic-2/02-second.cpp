/* 
Task #2960. Testing system
Data input and output is performed through standard input/output streams.
The conditions of one of the problems on this site are written: “If the given four-digit number is symmetrical, output 1, otherwise output any other integer.” To check the problem, pre-prepared examples and the correct answers to them are used

The student thinks that he has solved this problem, but for some reason the testing system does not accept his solution. The student thinks that this is because he is outputting a different number than the one written in the correct answers.

Write a program that, based on the answer recorded in the testing system and the student's answer, determines whether the student solved the problem correctly.

Input data
The program receives two numbers as input: the answer recorded in the testing system and the student’s answer.

Output data
The program should output YES if the student gave the correct answer and NO otherwise.
*/
#include <iostream>
using namespace std;

int main() {
  int value , answer;
  cin >> value >> answer;

  if(answer == 1){
    cout << "NO";
  }else{
    cout << "YES";
  }
  return 0;
}