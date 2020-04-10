/*Kellen Haas
 *CPSC 1021
 *Lab11
 *4/07/20
*/

#ifndef ANIMAL_H
#define ANIMAL_H

#include <stdio.h>
#include <cstring>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <memory>
#include <vector>
#include <iomanip>

using namespace std;


class Animal {
    private:
        int age;
        double weight;

    public:
        Animal(int, double);
        ~Animal();

        int getAge();
        double getWeight();
        void setAge(int);
        void setWeight(double);
        virtual void printInfo();
};

#endif
