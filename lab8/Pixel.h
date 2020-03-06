/*Kellen Haas
 *CPSC 1021
 *Lab8
 *3/3/20
*/

#ifndef PIXEL_H
#define PIXEL_H

#include <omp.h>
#include <iostream>
#include <stdio.h>
#include <fstream>
#include "header.h"

using namespace std;


class Pixel
{
    private:
        unsigned char red;
        unsigned char green;
        unsigned char blue;

    public:
        Pixel(unsigned char r = 0, unsigned char g = 0, unsigned char b = 0);
        void setR(unsigned char);
        void setG(unsigned char);
        void setB(unsigned char);
        void setPixel(unsigned char, unsigned char, unsigned char);
        Pixel getPixel()const;
        unsigned char getR()const;
        unsigned char getG()const;
        unsigned char getB()const;
        void writePixel(ofstream&);

};

bool checkFile(ofstream&);

const int h = 480, w = 640;

#endif
