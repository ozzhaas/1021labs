/*Kellen Haas
 *CPSC 1021
 *Lab6
 *2/18/20
*/

#ifndef OWNER_H
#define OWNER_H


#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <stdio.h>
#include <vector>

using namespace std;


class Owner {

    private:
        string name;
        int age;

    public:
        Owner(string, int);
        ~Owner();
        string getName();
        int getAge();

};


#endif
