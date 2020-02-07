/*Kellen Haas
 *CPSC 1021
 *Lab4
 *2/7/20
*/



#include "fileio.h"

using namespace std;

void fileRead() {
    int num;
    NodePtr newN = nullptr;

    /*Create the file pointer and open the input.txt file*/
    ifstream fptr;
    fptr.open("input.txt");

    /*Make sure file exists, give message and exit otherwise*/
    if (fptr.is_open()) {
        /*While we still have items to read*/
        while(fptr >> num){
            /*Create the new node to insert into the list*/
            newN = makeNewNode(num);
            /*Insert the new node into the list in ascending order*/
            insertStrategic(newN);
        }
    }
    else {
        /*If the file could not be opened or is corrupt*/
        cout << ("Error! Could not open file provided.\n");
        exit(1);
    }
    fptr.close();  // close the file

}
