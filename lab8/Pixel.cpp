/*Kellen Haas
 *CPSC 1021
 *Lab8
 *3/3/20
*/

#include "Pixel.h"


using namespace std;

Pixel::Pixel(unsigned char r, unsigned char g, unsigned char b) {
    red = r;
    green = g;
    blue = b;
}


void Pixel::setR(unsigned char r) {
    red = r;
}


void Pixel::setG(unsigned char g) {
    green = g;
}


void Pixel::setB(unsigned char b) {
    blue = b;
}


void Pixel::setPixel(unsigned char r, unsigned char g, unsigned char b) {
    setR(r);
    setG(g);
    setB(b);
}


Pixel Pixel::getPixel()const {
    Pixel tempPix(red, green, blue);
    return tempPix;
}


unsigned char Pixel::getR()const {
    return red;
}


unsigned char Pixel::getG()const {
    return green;
}


unsigned char Pixel::getB()const {
    return blue;
}


bool checkFile(ofstream& outputFile) {
    while (!outputFile.fail()){
        return true;
    }
    return false;
}


void Pixel::writePixel(ofstream& outputFile) {
    outputFile << red << green << blue;
}
