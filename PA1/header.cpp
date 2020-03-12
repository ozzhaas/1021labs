/*Kellen Haas
 *CPSC 1021
 *Lab8
 *3/3/20
*/

#include "header.h"


Header::Header(string m, string g, int w, int h, int mv) {
    magic = m;
    garbage = g;
    width = w;
    height = h;
    maxVal = mv;
}


void Header::setMagic(string m) {
    magic = m;
}

void Header::setGarb(string g) {
    garbage = g;
}



void Header::setWidth(int w) {
    width = w;
}


void Header::setHeight(int h) {
    height = h;
}

void Header::setMaxVal(int mv){
    maxVal = mv;
}


string Header::getMagic()const {
    return magic;
}


string Header::getGarb()const {
    return garbage;
}


int Header::getWidth()const {
    return width;
}


int Header::getHeight()const {
    return height;
}

int Header::getMVal()const {
    return maxVal;
}

void Header::readHeader(ifstream& inputFile) {
    getline(inputFile, magic);
    getline(inputFile, garbage);
    inputFile >> width;
    inputFile >> height;
    inputFile >> maxVal;
}





void Header::writeHeader(ofstream& outputFile) {
    outputFile << magic << endl << garbage << endl << width << " " << height << endl << maxVal << endl;
}
