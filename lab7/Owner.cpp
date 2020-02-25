/*Kellen Haas
 *CPSC 1021
 *Lab7
 *2/25/20
*/


#include "Owner.h"

using namespace std;


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
