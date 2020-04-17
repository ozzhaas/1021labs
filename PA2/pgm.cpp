/*Kellen Haas
 *CPSC 1020
 *Assignment 2
 *4/17/20
*/

#include "pgm.h"


Pgm::Pgm(string m, int w, int h, int mv) {
    magic = m;
    width = w;
    height = h;
    maxVal = mv;
}


void Pgm::setMagic(string m) {
    magic = m;
}


void Pgm::setWidth(int w) {
    width = w;
}

void Pgm::setHeight(int h) {
    height = h;
}

void Pgm::setMaxVal(int mv){
    maxVal = mv;
}

string Pgm::getMagic()const {
    return magic;
}


int Pgm::getWidth()const {
    return width;
}


int Pgm::getHeight()const {
    return height;
}

int Pgm::getMVal()const {
    return maxVal;
}

void Pgm::readPGM(ifstream& inputFile) {
    inputFile >> magic;
    inputFile >> width;
    inputFile >> height;
    inputFile >> maxVal;
    cout << width << endl;
    cout << height << endl;
}


void Pgm::writePGM(ofstream& outputFile) {
    outputFile << magic << endl << width << " " << height << endl << maxVal << endl;
}
