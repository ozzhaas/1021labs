/*Kellen Haas
 *CPSC 1021
 *Lab11
 *4/07/20
*/
#include "tiger.h"
#include "monkey.h"

using namespace std;

Tiger::Tiger(string t_sound, string t_name, int t_age, double t_weight) : Animal(t_age, t_weight) {
    soundsLike = t_sound;
    name = t_name;
    setAge(t_age);
    setWeight(t_weight);
}

Tiger::~Tiger() {}

string Tiger::getVoice() {
    return soundsLike;
}

string Tiger::getName() {
    return name;
}

void Tiger::setVoice(string t_sound) {
    soundsLike = t_sound;
}

void Tiger::setName(string t_name) {
    name = t_name;
}


void Tiger::printInfo() {
    //cout tiger info
    cout << "~~~~~~~~~~~~~~~~~Tiger~~~~~~~~~~~~~~~~~" << endl;
    cout << "\tName: " << setw(10) << getName() << endl;
    cout << "\tAge: " << setw(10) << getAge() << endl;
    cout << "\tWeight: " << setw(10) << getWeight() << endl;
    cout << "\tSound: " << setw(10) << getVoice() << endl;
}
