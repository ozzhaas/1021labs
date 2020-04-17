/*Kellen Haas
 *CPSC 1020
 *Assignment 2
 *4/17/20
*/

#include "colorPixel.h"

using namespace std;


ColorPixel::ColorPixel(int r, int g, int b) {
    red = r;
    green = g;
    blue = b;
}

ColorPixel::~ColorPixel(){};

void ColorPixel::setR(int r) {
    red = r;
}

void ColorPixel::setG(int g) {
    green = g;
}

void ColorPixel::setB(int b) {
    blue = b;
}



//Getters//
int ColorPixel::getRed()const {
    return red;
}


int ColorPixel::getGreen()const {
    return green;
}


int ColorPixel::getBlue()const {
    return blue;
}


//Write out a color pixel//
void ColorPixel::writePixel(ofstream& output) {
    output << red << endl << green << endl << blue << endl;
}

//Read in a color pixel//
ColorPixel ColorPixel::readPixel(ifstream& input) {
    int r = 0;
    int g = 0;
    int b = 0;

    input >> r >> g >> b;
    ColorPixel temp(r, g, b);
    return temp;
}
