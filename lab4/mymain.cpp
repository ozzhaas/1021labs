#include "linkedlist.h"
#include "fileio.h"


using namespace std;

int main (){

    fileRead();
    NodePtr newNode = NULL;

    // after you implemented your functions in .cpp file
	// - use the code below for testing your linked list.
	// Demonstrate that ALL functions are working correctly.

	// After that add code for reading data from inpout file.
	// Every time you read an integer, create a node and insert it
	// in the ascending order into the list.

	// At the end print the entire list to show that your code
	// functions correctly.



    for (int i = 0; i < 5; i++){
        newNode = makeNewNode (i);
        insertAtFront(newNode);
    }

    printList();

    cout << "After DeleteFromFront: " << endl;
    deleteFromFront();
    printList();

    NodePtr seven = makeNewNode(7);
    insertAtEnd(seven);
    cout <<"Inserting seven at END" << endl;
    printList();

    NodePtr eight = makeNewNode(8);
    insertAtEnd(eight);
    cout <<"Inserting eight at END" << endl;
    printList();

    cout << "After deleting eight: " << endl;
    deleteFromEnd();
    printList();

    cout << "After deleting seven:" << endl;
    deleteFromEnd();
    printList();



  return 0;
}
