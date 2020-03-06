/*Kellen Haas
 *CPSC 1021
 *Lab8
 *3/3/20
*/

#ifndef HEADER_H
#define HEADER_H


#include <omp.h>
#include <string>
#include <fstream>
#include <iostream>

using namespace std;



class Header
{
    private:
        string magic;
        int width, height, maxVal;

    public:
        Header(string m = "P6", int w = 0, int h = 0, int mv = 255);
        void setMagic(string);
        void setWidth(int);
        void setHeight(int);
        void setMaxVal(int);
        string getMagic()const;
        int getWidth()const;
        int getHeight()const;
        int getMVal()const;
        void readHeader(ifstream&);
        void writeHeader(ofstream&);
};

#endif
