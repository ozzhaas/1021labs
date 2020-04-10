/*Kellen Haas
 *CPSC 1021
 *Lab11
 *4/07/20
*/
#include "monkey.h"

using namespace std;

Monkey::Monkey(string m_name, string m_sound, int m_age, double m_weight) : Animal(m_age, m_weight)  {
    soundsLike = m_sound;
    name = m_name;
    setAge(m_age);
    setWeight(m_weight);
}

Monkey::~Monkey() {}

string Monkey::getVoice() {
    return soundsLike;
}

string Monkey::getName() {
    return name;
}

void Monkey::setVoice(string m_sound) {
    soundsLike = m_sound;
}

void Monkey::setName(string m_name) {
    name = m_name;
}


void Monkey::printInfo() {
    //cout monkey info
    cout << "~~~~~~~~~~~~~~~~~Monkey~~~~~~~~~~~~~~~~~" << endl;
    cout << "\tName: " << setw(10) << getName() << endl;
    cout << "\tAge: " << setw(10) << getAge() << endl;
    cout << "\tWeight: " << setw(10) << getWeight() << endl;
    cout << "\tSound: " << setw(10) << getVoice() << endl;
}
