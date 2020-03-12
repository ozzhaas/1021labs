/*Kellen Haas
 *CPSC 1020
 *Assignment 1
 *2/27/20
*/

#ifndef COLORPIXEL_H
#define COLORPIXEL_H

#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <stdio.h>


using namespace std;


class ColorPixel {
    private:

        unsigned char red, green, blue;
        // GrayPixel gPixel;

    public:

        ColorPixel(unsigned char r = 0, unsigned char g = 0, unsigned char b = 0);
        ~ColorPixel();

        void setR(unsigned char);
        void setG(unsigned char);
        void setB(unsigned char);
        //Getters//
        unsigned char getRed()const;
        unsigned char getGreen()const;
        unsigned char getBlue()const;
        // GrayPixel getGrayPix()const;


        void writePixel(ofstream&);
        ColorPixel readPixel(ifstream&);


};

#endif
