/*Kellen Haas
 *CPSC 1021
 *Lab8
 *3/3/20
*/

#include "header.h"


Header::Header(string m, int w, int h, int mv) {
    magic = m;
    width = w;
    height = h;
    maxVal = mv;
}


void Header::setMagic(string m) {
    magic = m;
}


void Header::setWidth(int w) {
    width = w;
}


void Header::setHeight(int h) {
    height = h;
}


string Header::getMagic()const {
    return magic;
}


int Header::getWidth()const {
    return width;
}


int Header::getHeight()const {
    return height;
}


void Header::writeHeader(ofstream& outputFile) {
    outputFile << "P6" << endl << width << " " << height << endl << maxVal << endl;
}
