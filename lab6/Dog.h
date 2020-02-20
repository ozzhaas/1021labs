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
        string d_name;
        string breed;
        int age;
        Owner* owner;
        static int dogCount;

    public:
        Dog();
        Dog(string, string, int, string, int);
        ~Dog();
        string getName();
        string getBreed();
        int getAge();
        void setName(string);
        void setBreed(string);
        void setAge(int);
        void printDogInfo(Dog);
        static void incrementCount();
        static int getDogCount();

};


#endif
