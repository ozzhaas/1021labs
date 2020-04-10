/*Kellen Haas
 *CPSC 1021
 *Lab11
 *4/07/20
*/
#include "tiger.h"
#include "monkey.h"

using namespace std;

//Constructor to create Tiger objects that are a child of the Animal class
Tiger::Tiger(string t_name, string t_sound, int t_age, double t_weight) : Animal(t_age, t_weight) {
    soundsLike = t_sound;
    name = t_name;
    setAge(t_age);
    setWeight(t_weight);
}

//Tiger destructor
Tiger::~Tiger() {}

//Getters
string Tiger::getVoice() {
    return soundsLike;
}

string Tiger::getName() {
    return name;
}

//Setters
void Tiger::setVoice(string t_sound) {
    soundsLike = t_sound;
}

void Tiger::setName(string t_name) {
    name = t_name;
}


void Tiger::printInfo() {
    //cout tiger info
    cout << endl << "~~~~~~~~~~~~~~~~~Tiger~~~~~~~~~~~~~~~~~" << endl;
    cout << "\tName:  \t\t" << left << getName() << endl;
    cout << "\tAge:   \t\t" << left << getAge() << endl;
    cout << "\tWeight:\t\t" << left << getWeight() << endl;
    cout << "\tSound: \t\t" << left << getVoice() << endl << endl;
}
