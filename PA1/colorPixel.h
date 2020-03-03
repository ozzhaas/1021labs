#ifndef COLORPIXEL_H
#define COLORPIXEL_H


/*Kellen Haas
 *CPSC 1020
 *Assignment 1
 *2/27/20
*/


#include <stdio.h>
#include <iostream>
#include <fstream>



using namespace std;


class ColorPixel {
    private:

        unsigned char r, g, b;
        GrayPixel gPixel;

    public:

        ColorPixel(unsigned char r = 0, unsigned char g = 0, unsigned char b = 0);
        ~ColorPixel();


        //Getters//
        unsigned char getRed()const;
        unsigned char getGreen()const;
        unsigned char getBlue()const;
        GrayPixel getGrayPix()const;


        void writePixel(ofstream&);
        ColorPixel readPixel(ifstream&);


};

#endif
