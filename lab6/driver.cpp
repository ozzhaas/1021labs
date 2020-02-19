/*Kellen Haas
 *CPSC 1021
 *Lab6
 *2/18/20
*/

#include "Dog.h"
#include "Owner.h"

using namespace std;


int main () {

    string breed = "spaniel";
    int age = 7;


    Dog mainDog(breed, age);



    mainDog.printDogInfo();


    cout << mainDog.getDogCount() << endl;



    return 0;
}
