/*Kellen Haas
 *CPSC 1021
 *Lab8
 *3/3/20
*/

#include "lab8.h"


using namespace std;



bool checkFile(ofstream& outputFile) {
    while (!outputFile.fail()){
        return true;
    }
    return false;
}



void printPixels(ofstream& outputFile, Pixel pix(r, g, b)) {


    outputFile << "P6\n" << w << " " << h << "\n255\n";

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            r = (unsigned char) (pix[i][j]->getR() * 255.0);
            g = (unsigned char) (pix[i][j]->getG() * 255.0);
            b = (unsigned char) (pix[i][j]->getB() * 255.0);

            pix[i][j].writePixel(outputFile);
        }
    }

}




Pixel::Pixel(unsigned char r, unsigned char g, unsigned char b){
	red = r;
	green = g;
	blue = b;
}


void Pixel::setR(unsigned char r){
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
