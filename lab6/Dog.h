/*Kellen Haas
 *CPSC 1021
 *Lab6
 *2/18/20
*/

#ifndef DOG_H
#define DOG_H


#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <stdio.h>
#include "Owner.h"


using namespace std;


class Dog {

    private:
        string breed;
        int age;
        Owner* owner;
        static int dogCount;

    public:
        Dog();
        Dog(string, int);
        ~Dog();
        string getBreed();
        int getAge();
        void setBreed(string);
        void setAge(int);
        void printDogInfo();
        static int getDogCount();

};


#endif
