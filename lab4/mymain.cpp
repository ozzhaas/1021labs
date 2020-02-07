/*Kellen Haas
 *CPSC 1021
 *Lab4
 *2/7/20
*/


#include "linkedlist.h"
#include "fileio.h"


using namespace std;

int main (){

    NodePtr newNode = NULL;



    /*Add numbers 0, 1, 2, 3, 4 to the list*/
    for (int i = 0; i < 5; i++){
        newNode = makeNewNode (i);
        insertAtEnd(newNode);
    }

    /*Call the function to read numbers from the text file and create
      a new node for each number and then add them to the list in
      ascending order.*/
    fileRead();

    cout << "\n\t\t~~~~~~~~~~~~~ Linked Lists in C++ ~~~~~~~~~~~~~\n";

    cout << "\nThe original list: \n";
    /*Call the function to print the complete list*/
    printList();

    cout << "\nAfter DeleteFromFront function: " << endl;

    /*Call the function to delete a number from the front of the list*/
    deleteFromFront();
    printList();

    NodePtr seven = makeNewNode(7);

    /*Call the function to insert the new node just made (above) into the
      list at the end*/
    insertAtEnd(seven);
    cout <<"\nInserting seven at the end of the list" << endl;
    printList();

    NodePtr eight = makeNewNode(8);
    /*Call the function to insert the new node just made (above) into the
      list at the end*/
    insertAtEnd(eight);
    cout <<"\nInserting eight at the end of the list" << endl;
    printList();

    cout << "\nAfter deleting eight from the end of the list: " << endl;
    /*Call the function to delete the new node at the end of the
      list*/
    deleteFromEnd();
    printList();

    cout << "\nAfter deleting seven from the end of the list:" << endl;
    /*Call the function to delete the new node at the end of the
      list*/
    deleteFromEnd();
    printList();

    cout << endl;



  return 0;
}
