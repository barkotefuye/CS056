// Lists support 
// - add/insert
// - remove
// - show
// - contains/ find
// - size or length

/* LINKED LISTS: NOTES

- 
-
-
-
- */

/*
   Author: Waqar Saleem
   File: W04L02-linkedList.cpp
   Date: Thursday, Feb 14, 2019

   Linked list, part 1.

   CSCI 056 Object Oriented Game Developemnt
   Pitzer College, Spring 2019
*/

#include <iostream>

struct Node {
  int data;
  Node *next;
  
  Node(int data=0, Node* ptr=NULL) {
    this->data = data;  // (*this).data = data;
    next = ptr;
  }
};

struct List {
  Node *head;  // points to the first node in the list.

  List() {
    head = NULL;
  }

  int size() {
    // Starting with the first node, move to the next until NULL is reached.
    Node *temp = head;
    int count = 0;
    while (temp != NULL) {
      temp = temp->next; // temp = (*temp).next;
      count++;
    }
    return count;
  }

  Node* find(int n) {
    // Starting with the first node, move to the next until NULL or the desired
    // node is reached.
    Node *temp = head;
    while (temp != NULL and temp->data != n) {
      temp = temp->next;
    }
    if (temp == NULL) { // temp ran out of the list - n is not in the list.
      return NULL;
    }
    else {  // n is in the list, temp points to the node containing n.
      return temp;
    }
  }

  bool contains(int n) {
    return find(n) != NULL;
  }

  // Add the value, n, to the end of the list.
  void append(int n) {
    Node *new_node = new Node(n);  // the node to be added.
    if (head == NULL) {  // list is empty.
      head = new_node;
    }
    else {  // list is not empty.
      // Traverse to the last node and append new_node.
      Node *temp = head;
      while (temp->next != NULL) {
	temp = temp->next;
      }
      temp->next = new_node;
    }
  }

  void show() {
    if (head == NULL) {  // empty list.
      std::cout << "The list is empty.\n";
    }
    else {
      // Starting with the first node, move to the next until NULL is reached.
      Node *temp = head;
      while (temp != NULL) {
	std::cout << temp->data << " ";
	temp = temp->next;
      }
      std::cout << "\n";
    }
  }

  void remove(int a){
  	//
  	Node *temp = head;
  	if(temp->data = n){
  		temp = temp->next;
  		delete head;
  		head = temp;
  	}
  	else{
  		while(temp->next->data != n){
  			temp = temp->next;
  		}
  		Node *delete_me = temp->next;
  		temp->next = temp->next->next;
  		delete delete_me;
  	}
  }
// MIDTERM

};

int main() {
  List mylist;
  mylist.show();
  mylist.append(3);
  mylist.append(7);
  mylist.append(0);
  mylist.show();
  std::cout << "The mylist has size: " << mylist.size() << "\n";
  std::cout << "The mylist contains 0: " << mylist.contains(0) << "\n";
  std::cout << "The mylist contains 3: " << mylist.contains(3) << "\n";
  std::cout << "The mylist contains 10: " << mylist.contains(10) << "\n";

  return 0;
}