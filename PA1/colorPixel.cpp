/*Kellen Haas
 *CPSC 1020
 *Assignment 1
 *2/27/20
*/
#include "colorPixel.h"

using namespace std;




ColorPixel::ColorPixel(unsigned char r, unsigned char g, unsigned char b) {
    red = r;
    green = g;
    blue = b;
}

ColorPixel::~ColorPixel(){};

void ColorPixel::setR(unsigned char r) {
    red = r;
}

void ColorPixel::setG(unsigned char g) {
    green = g;
}

void ColorPixel::setB(unsigned char b) {
    blue = b;
}



//Getters//
unsigned char ColorPixel::getRed()const {
    return red;
}


unsigned char ColorPixel::getGreen()const {
    return green;
}


unsigned char ColorPixel::getBlue()const {
    return blue;
}


// GrayPixel ColorPixel::getGrayPix()const {
//     return gPixel;
// }


void ColorPixel::writePixel(ofstream& output) {
    output << red << green << blue;
}


ColorPixel ColorPixel::readPixel(ifstream& input) {
    unsigned char r, g, b;
    input >> r >> g >> b;
    ColorPixel temp(r, g, b);
    return temp;
}
