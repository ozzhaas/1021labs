#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>

/************************************************************************
struct listNode:
    -Contains member of data which will hold the number to be inserted
    into the list.
    -Contains a pointer to the previous node or number in the list and
    a pointer to the next node or number in the list.
*************************************************************************/
    struct listNode {
        int data;
        struct listNode* prev;
        struct listNode* next;
    };


/************************************************************************
    Create nicknames for the struct to be called "Node" and for a
    pointer to the struct to be called "NodePtr".
*************************************************************************/
    typedef struct listNode Node;
    typedef Node* NodePtr;

/************************************************************************
void fileRead() Function:
    Parameters: No parameters
    Return: No return
    Function uses C++ file stream to read the numbers from the file and
    calls the insertStrategic function to insert them into the list in
    ascending order.
*************************************************************************/
    void fileRead();


/************************************************************************
bool isEmpty() Function:
    Parameters: No parameters
    Return: True is the list is empty or false if there are nodes in the
    list.
    Function checks to see if the head is pointing to nullptr and if it
    is then it returns true, otherwise it returns false.
*************************************************************************/
    bool isEmpty();


/************************************************************************
NodePtr makeNewNode(int) Function:
    Parameters: one integer that is the data value of the new node
    created.
    Return: a NodePtr to the new node that needs to be inserted into the
    list.
    Function allocates space for a node, and if the allocation is
    successful it will assign the integer values passed as a parameter to
    the data value of the newNode. Then it will make newNode's next point
    to nullptr so that the list will have an ending point.
*************************************************************************/
    NodePtr makeNewNode(int);


/************************************************************************
void insertAtFront() Function:
    Parameters: const NodePtr
    Return: void
    Function takes a node created by the makeNewNode function and inserts
    it at the front of the list.
*************************************************************************/
    void insertAtFront(const NodePtr);


/************************************************************************
void insertAtEnd() Function:
    Parameters: const NodePtr
    Return: void
    Function takes a node created by the makeNewNode function and inserts
    it at the end of the list.
*************************************************************************/
    void insertAtEnd(const NodePtr);



/************************************************************************
void insertStrategic() Function:
    Parameters: const NodePtr
    Return: void
    Function takes a node created by the makeNewNode function and inserts
    it into the list in ascending order. This way when the list prints at
    the end all of the numbers in the list are in ascending order.
*************************************************************************/
    void insertStrategic(const NodePtr);



/************************************************************************
void deleteFromFront() Function:
    Parameters: No parameters
    Return: void
    Function assigns delNode to the value of the head node, and the value
    of the head of the list to head's next so the link in the list is not
    broken. Then it deletes delNode to get rid of the number at the front
    of the list.
*************************************************************************/
    void deleteFromFront();

/************************************************************************
void deleteFromEnd() Function:
    Parameters: No parameter
    Return: void
    Function assigns delNode to the value of the head node, and then
    starts a while loop to loop through the entire list as long the head's
    next and the head's next, next are not nullptrs. If the head's next
    and the head's next, next are not nullptrs, then we assign delNode to
    delNode's next to continue moving it down the list to the end. Then
    when head's next and head's next, next are nullptrs the function will
    delete delNode's next and assign delNode's next the value of nullptr.
*************************************************************************/
    void deleteFromEnd();



/************************************************************************
void printList() Function:
    Parameters: No parameters
    Return: void
    Function checks if the list is empty and if it is, then it will print
    "The list is empty". Otherwise a NodePtr called temp is created to
    point to head's value and then we print the data values of temp while
    temp is not equal to nullptr. Finally, temp is assigned to temp's next
    so that the function continues down the list. 
*************************************************************************/
    void printList();


#endif
