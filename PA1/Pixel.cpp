/*Kellen Haas
 *Patrick Dodd
 *CPSC 1020
 *Assignment 1
 *2/27/20
*/
#include "Pixel.h"

using namespace std;




Pixel::Pixel(unsigned char r, unsigned char g, unsigned char b) {
    red = r;
    green = g;
    blue = b;
}

Pixel::~Pixel(){};

void Pixel::setR(unsigned char r) {
    red = r;
}

void Pixel::setG(unsigned char g) {
    green = g;
}

void Pixel::setB(unsigned char b) {
    blue = b;
}



//Getters//
unsigned char Pixel::getRed()const {
    return red;
}


unsigned char Pixel::getGreen()const {
    return green;
}


unsigned char Pixel::getBlue()const {
    return blue;
}


// GrayPixel Pixel::getGrayPix()const {
//     return gPixel;
// }


void Pixel::writePixel(ofstream& output) {
    output << red << green << blue;
}


Pixel Pixel::readPixel(ifstream& input) {
    unsigned char r, g, b;
    input >> r >> g >> b;
    Pixel temp(r, g, b);
    return temp;
}
