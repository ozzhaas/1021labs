#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>


    struct listNode {
        int data;
        struct listNode* prev;
        struct listNode* next;
    };

    typedef struct listNode Node;
    typedef Node* NodePtr;


//   static int nodeCount = 0;

    void fileRead();
    bool isEmpty();
    NodePtr makeNewNode(int);

    void insertAtFront(const NodePtr);
    void insertAtEnd(const NodePtr);

    void deleteFromFront( );
    void deleteFromEnd( );

    void printList();


#endif
