/*Kellen Haas
 *CPSC 1021
 *Lab5
 *2/11/20
*/

#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <stdio.h>

using namespace std;


class Car {

    public:
        Car();

        ~Car();

        void setMake(string);
        void setModel(string);
        void setYear(int);
        void setPrice(double);

        string getMake();
        string getModel();
        int getYear();
        double getPrice();

        string printCarInfo(Car);
        bool isClassic();






    private:
        string make;
        string model;
        int year;
        double price;

};


#endif
