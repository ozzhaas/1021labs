#include "linkedlist.h"

using namespace std;

    NodePtr head = NULL;
    NodePtr tail = NULL;


    bool isEmpty() {
        return (head == nullptr);
    }


    NodePtr makeNewNode(int number) {
        NodePtr newNode = (NodePtr) malloc(sizeof(Node));

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
                temp = head->next;
                temp->next = newPtr;
            }
        newPtr->next = nullptr;
        }
    }


    void insertStrategic(const NodePtr newPtr){

    }

    void deleteFromFront( ) {
        NodePtr delNode = head;
        NodePtr nextDelNode;

        while (delNode->next != nullptr) {
            delNode = delNode->next;
            if (delNode == NULL) {
                delete (delNode);
                nextDelNode = delNode;
            }
        }
    head = NULL;
    }



    void deleteFromEnd( ) {

    }



    void printList( ) {
        if (isEmpty()) {
            cout << "List is empty" << endl;
        }
        else {
            NodePtr temp = head;
            cout << " The data is: ";
            while (temp != nullptr) {
                cout << temp->data << " ";
                temp = temp->next;
            }
        cout << endl;
        }
    }
