/*Kellen Haas
 *CPSC 1020
 *Assignment 2
 *4/17/20
*/

#ifndef ColorPixel_H
#define ColorPixel_H

#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <stdio.h>
#include "grayPixel.h"




using namespace std;


class ColorPixel {
    private:
        //Red, Green, and Blue values to be read in, flipped, and printed out//
        int red, green, blue;

    public:

        //Parameterized Constructor for a ColorPixel Object//
        ColorPixel(int r = 0, int g = 0, int b = 0);
        ~ColorPixel();

        //Setters//
        void setR(int);
        void setG(int);
        void setB(int);
        //Getters//
        int getRed()const;
        int getGreen()const;
        int getBlue()const;


        void writePixel(ofstream&);
        ColorPixel readPixel(ifstream&);


};

#endif
