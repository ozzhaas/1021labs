/*Kellen Haas
 *CPSC 1020
 *Assignment 2
 *4/17/20
*/


#include "functions.h"

using namespace std;

//Check to make sure the file opens properly//
bool checkFile(ifstream& inputFile) {
	while (!inputFile.fail()){
		return true;
	}
cout << "Input file failed to open." << endl;
return false;
}


//Flips the image vertically//
void VFlipPPM(Ppm head, vector<vector<ColorPixel> >& pixVec) {
	reverse(pixVec.begin(), pixVec.end());
}

void VFlipPGM(Pgm head, vector<vector<GrayPixel> >& pixVec) {
        reverse(pixVec.begin(), pixVec.end());
}


//Flips the image horizontally//
void HFlipPPM(Ppm head, vector<vector<ColorPixel> >& pixVec) {
    int width = head.getWidth();
	for (int k = 0; k < head.getHeight(); k++) {
		for (int n = 0; n < head.getWidth() / 2; n++){
            swap(pixVec[k][n], pixVec[k][width - n - 1]);
		}
	}
}

void HFlipPGM(Pgm head, vector<vector<GrayPixel> >& pixVec) {
    int width = head.getWidth();
    for (int k = 0; k < head.getWidth(); k++) {
        for (int n = 0; n < head.getHeight() / 2; n++){
            swap(pixVec[k][n], pixVec[k][width - n - 1]);
        }
    }
}
