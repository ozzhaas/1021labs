/*Kellen Haas
 *CPSC 1020
 *Patrick Dodd
 *Assignment 1
 *2/27/20
*/

#ifndef PIXEL_H
#define PIXEL_H

#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <stdio.h>
#include "grayPixel.h"




using namespace std;


class Pixel {
    private:
        //Red, Green, and Blue values to be read in, flipped, and printed out//
        unsigned char red, green, blue;

    public:

        //Parameterized Constructor for a Pixel Object//
        Pixel(unsigned char r = 0, unsigned char g = 0, unsigned char b = 0);
        ~Pixel();

        //Setters//
        void setR(unsigned char);
        void setG(unsigned char);
        void setB(unsigned char);
        //Getters//
        unsigned char getRed()const;
        unsigned char getGreen()const;
        unsigned char getBlue()const;


        void writePixel(ofstream&);
        Pixel readPixel(ifstream&);


};

#endif
