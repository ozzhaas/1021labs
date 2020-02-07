/*Kellen Haas
 *CPSC 1021
 *Lab4
 *2/7/20
*/

/*See linkedlist.h for all code comments for the following functions*/


#include "linkedlist.h"

using namespace std;

NodePtr head = NULL;
NodePtr tail = NULL;


bool isEmpty() {
    return (head == nullptr);
}


NodePtr makeNewNode(int number) {
    NodePtr newNode = new (Node);

    if(newNode != nullptr) {
        newNode->data = number;
        newNode->next = nullptr;
    }
    return newNode;
}


void insertAtFront(const NodePtr newPtr) {
    if (isEmpty()) {
        head = newPtr;
        tail = newPtr;
    }
    else { // not empty
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
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newPtr;
        newPtr->next = nullptr;

    }
}


void insertStrategic(const NodePtr newPtr){
    NodePtr currentNode = head;

    if (isEmpty()) {
        currentNode = newPtr;
        currentNode->next = nullptr;
    }
    else {
        while (currentNode->next != nullptr) {
            if (currentNode->data <= newPtr->data) {
                if(currentNode->next->data > newPtr->data){
                    newPtr->next = currentNode->next;
                    currentNode->next = newPtr;
                    return;
                }
            }
            currentNode = currentNode->next;
        }
        currentNode->next = newPtr;
        newPtr->next = nullptr;
    }

}


void deleteFromFront() {
    NodePtr delNode = head;

    if (delNode != nullptr) {
        head = head->next;
        delete (delNode);
    }
}



void deleteFromEnd() {
    NodePtr delNode = head;

    while ((delNode->next != nullptr) && (delNode->next->next != nullptr)) {
        delNode = delNode->next;
    }

    delete delNode->next;
    delNode->next = nullptr;
}



void printList() {
    if (isEmpty()) {
        cout << "List is empty" << endl;
    }
    else {
        NodePtr temp = head;
        cout << "   The data is: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    cout << endl;
    }
}
