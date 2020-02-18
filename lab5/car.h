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

/****************************************************************************
    C++ default constructor and destructor for the class Car.
****************************************************************************/
        Car();

        ~Car();

/****************************************************************************
    Setters and Getters that are used to set and get the value of the Car
    objects in the Car class because Make, Model, Year, and Price are all
    private variables that can only be accessed outside of the class using
    the setter and getter functions declared inside the class.
****************************************************************************/

        void setMake(string);
        void setModel(string);
        void setYear(int);
        void setPrice(double);

        string getMake();
        string getModel();
        int getYear();
        double getPrice();


/****************************************************************************
    printCarInfo() Function:
        Parameters: takes a single Car object as a parameter
        Return: returns a formatted string to send to the output file
        Purpose: This function will format the data for the Car object and
        then send that formatted data to main where it will be printed to
        the output file "formatted.data".
****************************************************************************/
        string printCarInfo(Car);


/****************************************************************************
isClassic() Function:
    Parameters: takes a single Car objext as a parameter
    Return: returns a true or false if the Car is determined to be classic
    or not.
    Purpose: This function will check to see if the Car object that is
    passed to it has a year that is earlier than 1990. If the year is
    earlier then the car is a classic car so the function will return true.
    If it is not earlier, then the function will return false.
****************************************************************************/
        bool isClassic(Car);


    private:

/****************************************************************************
    These variables are declared private in my Car class so that they
    cannot be accidentally changed by a function from another file. 
****************************************************************************/
        string make;
        string model;
        int year;
        double price;

};


#endif
