/*Kellen Haas
 *CPSC 1021
 *Lab11
 *4/07/20
*/

#include "animal.h"
#include "monkey.h"
#include "tiger.h"

using namespace std;

Animal::Animal(int a, double w) {
    age = a;
    weight = w;
}

Animal::~Animal() {}

int Animal::getAge() {
    return age;
}

double Animal::getWeight() {
    return weight;
}

void Animal::setAge(int a) {
    age = a;
}

void Animal::setWeight(double w) {
    weight = w;
}

void Animal::printInfo() {
    //test
    cout << "Test\n";
}
