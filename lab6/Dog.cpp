/*Kellen Haas
 *CPSC 1021
 *Lab6
 *2/18/20
*/

#include "Dog.h"
#include "Owner.h"




Dog::Dog(){}


Dog::Dog(string dogBreed, int dogAge) {
    breed = dogBreed;
    age = dogAge;
    int ownAge = 0;
    string ownName = "default";

    cout << "Enter your name and age: \n";
    cin >> ownName >> ownAge;

    owner = new Owner(ownName, ownAge);

}


Dog::~Dog() {}



string Dog::getBreed(){
    return breed;
}


int Dog::getAge() {
    return age;
}


void Dog::setBreed(string dogBreed){
    breed = dogBreed;
}


void Dog::setAge(int dogAge) {
    age = dogAge;
}


void Dog::printDogInfo() {
    cout << owner->getName() << endl;
    cout << owner->getAge() << endl;
}


int Dog::dogCount = 0;


int Dog::getDogCount(){

    return dogCount;

}
