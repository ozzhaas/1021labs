/*Kellen Haas
 *Patrick Dodd
 *CPSC 1020
 *Assignment 1
 *2/27/20
*/
#ifndef GRAYPIXEL_H
#define GRAYPIXEL_H


#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <stdio.h>
#include <iostream>


using namespace std;


class GrayPixel {
    private:
        int row;
        int col;


    public:
        GrayPixel();
        GrayPixel(int, int);

        void writeGrayPixel(ofstream&);
        GrayPixel readGrayPixel(ifstream&);


};


#endif
