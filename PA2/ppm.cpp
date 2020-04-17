/*Kellen Haas
 *CPSC 1020
 *Assignment 2
 *4/17/20
*/

#include "ppm.h"

Ppm::Ppm(string m, int w, int h, int mv) {
    magic = m;
    width = w;
    height = h;
    maxVal = mv;
}


void Ppm::setMagic(string m) {
    magic = m;
}


void Ppm::setWidth(int w) {
    width = w;
}

void Ppm::setHeight(int h) {
    height = h;
}

void Ppm::setMaxVal(int mv){
    maxVal = mv;
}

string Ppm::getMagic()const {
    return magic;
}


int Ppm::getWidth()const {
    return width;
}


int Ppm::getHeight()const {
    return height;
}

int Ppm::getMVal()const {
    return maxVal;
}

void Ppm::readPPM(ifstream& inputFile) {
    inputFile >> magic;
    inputFile >> width;
    inputFile >> height;
    inputFile >> maxVal;
    cout << width << endl;
    cout << height << endl;
}


void Ppm::writePPM(ofstream& outputFile) {
    outputFile << magic << endl << width << " " << height << endl << maxVal << endl;
}
