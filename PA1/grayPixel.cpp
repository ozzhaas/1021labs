/*Kellen Haas
 *CPSC 1020
 *Assignment 1
 *2/27/20
*/
#include "grayPixel.h"

GrayPixel::GrayPixel(int w, int h, int max) {
    width = w;
    height = h;
    maxVal = max;

}

GrayPixel GrayPixel::readGrayPixel(ifstream& input) {

    int magic, w, h, max, i, j;

    input >> magic;
    input >> w >> h;
    input >> max;


}
