/*Kellen Haas
 *CPSC 1021
 *Lab6
 *2/18/20
*/


#include "Owner.h"


Owner::Owner(string ownName, int ownAge) {
    name = ownName;
    age = ownAge;
}


Owner::~Owner() {}


string Owner::getName() {
    return name;
}


int Owner::getAge() {
    return age;
}
