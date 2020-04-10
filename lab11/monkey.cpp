/*Kellen Haas
 *CPSC 1021
 *Lab11
 *4/07/20
*/
#include "monkey.h"

using namespace std;

//Constructor to create Monkey objects that are a child of the Animal class
Monkey::Monkey(string m_name, string m_sound, int m_age, double m_weight) : Animal(m_age, m_weight)  {
    soundsLike = m_sound;
    name = m_name;
    setAge(m_age);
    setWeight(m_weight);
}

//Monkey destructor
Monkey::~Monkey() {}

//Getters
string Monkey::getVoice() {
    return soundsLike;
}

string Monkey::getName() {
    return name;
}

//Setters
void Monkey::setVoice(string m_sound) {
    soundsLike = m_sound;
}

void Monkey::setName(string m_name) {
    name = m_name;
}


void Monkey::printInfo() {
    //cout monkey info
    cout << endl << "~~~~~~~~~~~~~~~~~Monkey~~~~~~~~~~~~~~~~~" << endl;
    cout << "\tName:  \t\t" << left << getName() << endl;
    cout << "\tAge:   \t\t" << left << getAge() << endl;
    cout << "\tWeight:\t\t" << left << getWeight() << endl;
    cout << "\tSound: \t\t" << left << getVoice() << endl << endl;
}
