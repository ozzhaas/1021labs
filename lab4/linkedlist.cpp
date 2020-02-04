#include <stdlib.h>
#include <iostream>
#include "mylist.h"

using namespace std;

bool isEmpty(){
   return (head == NULL);
}

NodePtr makeNewNode(int number){
   NodePtr newNode = (NodePtr) malloc(sizeof(Node));
   if(newNode != NULL){
      newNode->data = number;
      newNode->next = NULL;
   }
   return newNode;
}

void insertAtFront(const NodePtr newPtr){
    if (isEmpty()){
     head = newPtr;
	 tail = newPtr;
   }
   else{ // not empty
     newPtr->next = head;
     head = newPtr;
   }

}

void insertAtEnd(const NodePtr newPtr){
    NodePtr temp = head;

    if (isEmpty()) {
        //List is empty
        head = newPtr;
        tail = newPtr;
    }
    else {
        while (temp->next != nullptr){
            temp = head->next;
            temp->next = newPtr;
        }
        newPtr->next = nullptr;
    }
}

void insertStrategic(const Nodeptr newPtr){

}

void deleteFromFront( ){

}

void deleteFromEnd( ){

}

void printList( ){
   if (isEmpty()){
     cout << "List is empty" << endl;
   }
   else {
     NodePtr temp = head;
     while (temp != NULL){
       cout << " The data is: " << temp->data << endl;
       temp = temp->next;
     }
   }
}
