/*Kellen Haas
 *CPSC 1021
 *Lab7
 *2/25/20
*/

#include "Dog.h"
#include "Owner.h"

using namespace std;



Dog::Dog(){}


Dog::Dog(string dogName, string dogBreed, int dogAge, string ownName, int ownAge) {
    breed = dogBreed;
    age = dogAge;
    d_name = dogName;
    owner = new Owner(ownName, ownAge);
}


Dog::~Dog() {}


string Dog::getName() {
    return d_name;
}


string Dog::getBreed() {
    return breed;
}


int Dog::getAge() {
    return age;
}


void Dog::setName(string dogName) {
    d_name = dogName;
}

void Dog::setBreed(string dogBreed){
    breed = dogBreed;
}


void Dog::setAge(int dogAge) {
    age = dogAge;
}


void Dog::printDogInfo(Dog tempDog) {
    tempDog.incrementCount();
    cout << "\t\tDog " << tempDog.getDogCount() << ":\n\n";
    cout << "Owner's Info: " << setw(18) << right
         << owner->getName() << ", " << owner->getAge() << endl;
    cout << "Dog's Name: " << setw(24) << right << tempDog.getName() << endl;
    cout << "Dog's Breed: " << setw(23) << right << tempDog.getBreed() << endl;
    cout << "Dog's Age: " << setw(25) << right << tempDog.getAge() << endl
         << endl << endl;
}


void Dog::incrementCount() {
    Dog::dogCount++;
}

int Dog::dogCount = 0;


int Dog::getDogCount(){

    return dogCount;

}
