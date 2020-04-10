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
    Tiger cat("Rajah", "ROAR!", 4, 300.5);
    Tiger tig("Shere Khan", "Chuff", 10, 290.9);
    Animal* t1 = new Tiger(cat);
    Animal* t2 = new Tiger(tig);
    myAnimals.push_back(t1);
    myAnimals.push_back(t2);

    //Create two Monkey objects
    Monkey primate("King Louie", "Eeee eee ooohaha", 5, 95.7);
    Monkey chimp("Abu", "Eeek aaak oook", 12, 79.3);
    Animal* m1 = new Monkey(primate);
    Animal* m2 = new Monkey(chimp);
    myAnimals.push_back(m1);
    myAnimals.push_back(m2);

for (unsigned int i = 0; i < myAnimals.size(); i++) {
    myAnimals[i]->printInfo();
}




    return 0;
}
