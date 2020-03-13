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


using namespace std;


class Pixel {
    private:

        unsigned char red, green, blue;
        // GrayPixel gPixel;

    public:

        Pixel(unsigned char r = 0, unsigned char g = 0, unsigned char b = 0);
        ~Pixel();

        void setR(unsigned char);
        void setG(unsigned char);
        void setB(unsigned char);
        //Getters//
        unsigned char getRed()const;
        unsigned char getGreen()const;
        unsigned char getBlue()const;
        // GrayPixel getGrayPix()const;


        void writePixel(ofstream&);
        Pixel readPixel(ifstream&);


};

#endif
