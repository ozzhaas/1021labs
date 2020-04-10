/*Kellen Haas
 *CPSC 1021
 *Lab11
 *4/07/20
*/
#include "animal.h"
#include "monkey.h"
#include "tiger.h"

using namespace std;

int main() {
    vector<Animal*> myAnimals;


    //Create two Tiger objects
    Animal* t1 = new Tiger("Rajah", "ROAR!", 4, 300.5);;
    Animal* t2 = new Tiger("Shere Khan", "Chuff", 10, 290.9);
    myAnimals.push_back(t1);
    myAnimals.push_back(t2);

    //Create two Monkey objects

    Animal* m1 = new Monkey("King Louie", "Eeee eee ooohaha", 5, 95.7);
    Animal* m2 = new Monkey("Abu", "Eeek aaak oook", 12, 79.3);
    myAnimals.push_back(m1);
    myAnimals.push_back(m2);

for (unsigned int i = 0; i < myAnimals.size(); i++) {
    myAnimals[i]->printInfo();
}




    return 0;
}
