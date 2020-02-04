#ifndef FILEIO_H
#define FILEIO_H

#include "linkedlist.h"


using namespace std;

void fileRead() {
    int num;
    NodePtr newN = nullptr;

    ifstream fptr;
    fptr.open("input.txt");

    // make sure file exists, give message and exit otherwise
    if (fptr.is_open()) {
        // while we still have items to read
        while(fptr >> num){
            cout << "Num is:  " << num << endl;
            newN = makeNewNode(num);
            insertAtFront(newN);
        }
    }
    else {
        cout << ("Error! Could not open file provided.\n");
        exit(1);
    }
    fptr.close();  // close the file

}

#endif
