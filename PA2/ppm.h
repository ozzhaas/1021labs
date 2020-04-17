/*Kellen Haas
 *CPSC 1020
 *Assignment 2
 *4/17/20
*/


#ifndef PPM_H
#define PPM_H

#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include "colorPixel.h"
#include "grayPixel.h"


using namespace std;



class Ppm
{
    private:
        string magic;
        int width, height, maxVal;


    public:
        //Constructs a header object for the .ppm files//
        Ppm(string m = " ", int w = 0, int h = 0, int mv = 255);

        //Setters//
        void setMagic(string);
        void setWidth(int);
        void setHeight(int);
        void setMaxVal(int);

        //Getters//
        string getMagic()const;
        int getWidth()const;
        int getHeight()const;
        int getMVal()const;

        //Read and write a .ppm header//
        void readPPM(ifstream&);
        void writePPM(ofstream&);

        //Creates a 2D Vector of color pixels//
        vector<vector<ColorPixel> > cPixelVec;
};

#endif
