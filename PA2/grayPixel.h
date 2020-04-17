/*Kellen Haas
 *CPSC 1020
 *Assignment 2
 *4/17/20
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
        int shade;


    public:
        GrayPixel(){}
        GrayPixel(int g){shade = g;}
        ~GrayPixel(){}

        //Setters//
        void setShade(int g) {shade = g;}

        //Getters//
        int getShade()const {return shade;}

        //Write out a gray pixel//
        void writeGrayPixel(ofstream& output){
            output << shade << endl;
        }


        //Read in a gray pixel//
        GrayPixel readGrayPixel(ifstream& input){
            int s = 0;
            input >> s;
            GrayPixel temp(s);

            return temp;
        }
};


#endif
