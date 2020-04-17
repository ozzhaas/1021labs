/*Kellen Haas
 *Patrick Dodd
 *CPSC 1020
 *Assignment 1
 *2/27/20
*/
#include "ColorPixel.h"

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
    output << red << green << blue << endl;
    // cout << red << green << blue;
}

//Try getline
Pixel Pixel::readPixel(ifstream& input) {
    string r_line;
    string g_line;
    string b_line;
    unsigned char r, g, b;

    input >> r_line >> g_line >> b_line;
    r = r_line[0] + r_line[1] + r_line[2];
    g = g_line[0] + g_line[1] + g_line[2];
    b = b_line;
    cout << r << endl << g << endl << b << endl;

    // unsigned char r, g, b;
    Pixel temp(r, g, b);
    // input >> r >> g >> b;
    // cout << r << g << b;
    return temp;
}
