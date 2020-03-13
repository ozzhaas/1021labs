/*Kellen Haas
 *Patrick Dodd
 *CPSC 1021
 *Lab8
 *3/3/20
*/

#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>


using namespace std;



class Header
{
    private:
        string magic;
        string garbage;
        int width, height, maxVal;


    public:
        Header(string m = " ", string g = " ", int w = 0, int h = 0, int mv = 255);
        void setMagic(string);
        void setGarb(string);
        void setWidth(int);
        void setHeight(int);
        void setMaxVal(int);
        string getMagic()const;
        string getGarb()const;
        int getWidth()const;
        int getHeight()const;
        int getMVal()const;
        void readHeader(ifstream&);
        void writeHeader(ofstream&);
};

#endif
