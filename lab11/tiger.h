/*Kellen Haas
 *CPSC 1021
 *Lab11
 *4/07/20
*/

#ifndef TIGER_H
#define TIGER_H

#include "animal.h"
#include "monkey.h"

using namespace std;


class Tiger : public Animal {
    private:
        string name;
        string soundsLike;

    public:
        Tiger(string, string, int, double);
        ~Tiger();

        string getVoice();
        string getName();
        void setVoice(string);
        void setName(string);
        void printInfo();
};

#endif
