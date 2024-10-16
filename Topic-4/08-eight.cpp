/* 
Problem No. 111. Captain Flint
Captain Flint buried a treasure on Treasure Island. He left a description of how to find the treasure. The description consists of lines of the form: "North 5", where the word is one of "North", "South", "East", "West", – specifies the direction of movement, and the number is the number of steps that must be taken in this direction.

Write a program that, given a description of the path to the treasure, determines the exact coordinates of the treasure, assuming that the origin of the coordinates is at the beginning of the path, the OX axis is directed to the east, and the OY axis is directed to the north.

Input data
The input is a sequence of strings of the specified format. It is guaranteed that the numbers do not exceed108
.

Output data
It is necessary to output the coordinates of the treasure - two integers separated by a space. It is guaranteed that these numbers do not exceed108
.
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    int step;
    int x = 0, y = 0;

  while (cin >> word >> step) {
    if (word == "North") {
      y += step;
    } else if (word == "South") {
      y -= step;
    } else if (word == "East") {
      x += step;
    } else if (word == "West") {
      x -= step;
    }
  }
  // to get the answer you need to run the program again after entering the values or you need to signal the terminal with EOF. FOR:
    // Mac = Ctrl + D
    // Win + Ctrl + Z

    cout << x << " " << y;
    
    return 0;
}

