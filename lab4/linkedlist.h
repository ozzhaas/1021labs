#ifndef MYLIST_H
#define MYLIST_H

   struct listNode {
        int data;
        struct listNode* prev;
        struct listNode* next;
   };

   typedef struct listNode Node;
   typedef Node* NodePtr;

   NodePtr head = NULL;
   NodePtr tail = NULL;
   
   

   static int nodeCount = 0;

   bool isEmpty();
   NodePtr makeNewNode(int); 

   void insertAtFront(const NodePtr);
   void insertAtEnd(const NodePtr);

   void deleteFromFront( );
   void deleteFromEnd( );

   void printlist();


#endif
