//
//  main.cpp
//  Singly Linked List


//  Given a set of int values of size n (each separated by a space), construct a singly linked list in order using the first value as the head of the linked list. Print this linked list. Then, remove the smallest value from the linked list and reverse the linked list using a function reverseList(). Print this new linked list. You may assume that the data will contain at least 2 values. You MUST use a linked list implementation of this exercise to receive credit. You must use the formatting below in your solution. Feel free to include any variables in the reverseList() function.
//      Case 1: Input: 1 2 3 4 5 Output: [1, 2, 3, 4, 5] [5, 4, 3, 2]
//      Case 2: Input: 9 10 6 184 Output: [9, 10, 6, 184] [184, 10, 9]
// Assumptions: n is at least 2, and no larger than 100. The values given will always be 1 or greater, no 0 or negative values. All inputs will be on the same line separated by only one space each, with a line break following the last int.

#include <iostream>
#include "num.h"
using namespace std;

#include <string>
#include <sstream>



int main() {
  number n1; //list
  
  string input;

  //reads integer inputs as string value, inlcuding whitepsaces
  getline(cin, input);

  stringstream ss(input);
  int num;

  while(ss>>num) {
    n1.insert(num);
  }

  n1.print();
  cout << endl;

  
  n1.reverseList();
  cout << endl;
  
}
