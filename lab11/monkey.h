/*Kellen Haas
 *CPSC 1021
 *Lab11
 *4/07/20
*/

#ifndef MONKEY_H
#define MONKEY_H

#include "animal.h"
#include "tiger.h"

using namespace std;


class Monkey : public Animal {
    private:
        string name;
        string soundsLike;

    public:
        Monkey(string, string, int, double);
        ~Monkey();

        string getVoice();
        string getName();
        void setVoice(string);
        void setName(string);
        void printInfo();

};

#endif
