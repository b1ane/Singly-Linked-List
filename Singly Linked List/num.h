//
//  num.h
//  Singly Linked List
//
//  Created by blane on 9/12/22.
//

#ifndef num_h
#define num_h

#include <iostream>
using namespace std;

struct node{
int num;    //type of data being added to list
node* next; //holds address to next node
};

class number{
private:
  node* head; //points to first node in list

public:
  //constructor: sets first node to empty
  number() {
    head = nullptr;
  }

  bool isEmpty() { return head == nullptr;}


  void insert(int x) {
    //new node created
    node* newNode = new node;
    //new node holds value passed in paramter
    newNode -> num = x;
    //node after new node, set equal to null
    newNode -> next = nullptr;

    //if list is empty -- new node created is set to first node
    if(isEmpty()) {
      head = newNode;
    }
    else {
      // loop until last node is reached, add new node there
      node* cur = head; //cur stores value of head

      // loop until last node is reached
      while( cur->next != nullptr) {
        cur = cur -> next;
      }
      cur->next = newNode;
    }
    
  }


//prints entire list
  void print() {
    node* current = head;

    cout << "[";
    //executes if node is NOT empty
    while( current != nullptr) {
      //executes if NEXT node is NOT empty
      if(current->next != nullptr) {
        cout << current->num << ", ";
      }
      else {
        //outputs last node
        cout << current->num;
      }
      //loop condition
      current = current->next;
    }

    cout << "]";
  }




  void reverseList() {

    //FIND AND DELETE SMALLEST VALUE
    node* c = head;
    int min = c->num; //holds 6

  //loop through list, finds min value, stores in min
    while( c != nullptr ) {
      if( min > c->num ) {
        min = c->num;
      }
      c = c -> next;
    }


    node *cu = head;
    node *temp = new node;
    while (cu->next != nullptr) {
      if(cu->next->num == min) {
        temp = cu->next;
        cu->next = cu->next->next;
        delete temp;
      }
      cu = cu->next;
    }

    node* curr = head;
    while( curr != nullptr ) {
      // check if node to delete is first node
      if( head->num == min ) {
        head = head->next; //head is now pointing to 2nd node
        delete curr; //first node is deleted
      }
      curr = curr->next;
    }


    
  
    //REVERSING
    node* c1 = head; //holds reference to first node

    //2 empty nodes created
    node* t = new node;
    node* t2 = new node;
    
    while(c1 != nullptr) {
      t = c1->next;
      c1->next = t2;
      t2 = c1;
      c1 = t;
    }
    head = t2;


    //PRINT REVERSED LIST
    node* current = head;

    cout << "[";
    while( current->next != nullptr) {
      //executes if NEXT node is NOT empty
      if(current->next->next != nullptr) {
        cout << current->num << ", ";
      }
      else{
        cout << current->num; //returning 9
        //cout << head->num;  //returning 184
      }
      //loop condition
      current = current->next;
    }
    cout << "]";
    


  }





};


#endif /* num_h */
