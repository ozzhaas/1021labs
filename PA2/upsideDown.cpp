/*Kellen Haas
 *CPSC 1020
 *Assignment 2
 *4/17/20
*/

#include "colorPixel.h"
#include "grayPixel.h"
#include "ppm.h"
#include "pgm.h"
#include "functions.h"



int main (int argc, char* argv[]) {
	if (argc != 3) {
        cout << "No image file detected. Exiting program...\n";
    }

    ifstream inputFile;
    inputFile.open(argv[1], ios::binary);
    ofstream outputFile;
    outputFile.open(argv[2], ios::binary);
	string fileType;

    if (checkFile(inputFile) == true) {
		inputFile >> fileType;
		inputFile.seekg(ios::beg);
		if (fileType[1] == '3') {
			Ppm cHeader;
			cHeader.readPPM(inputFile);

			ColorPixel pix(255, 255, 255);

			cout << "read pix\n";
			for (int y = 0; y < cHeader.getHeight(); y++) {
		        vector<ColorPixel> tempVec;
		        for (int x = 0; x < cHeader.getWidth(); x++){
		        	ColorPixel newPix = pix.readPixel(inputFile);
					tempVec.push_back(newPix);
		        }
		        cHeader.cPixelVec.push_back(tempVec);
		    }

			//Flip the photo horizontally//
			HFlipPPM(cHeader, cHeader.cPixelVec);
			VFlipPPM(cHeader, cHeader.cPixelVec);

			cout << "write header\n";
			cHeader.writePPM(outputFile);

			cout << "write Pix\n";
			for(int i = 0; i < cHeader.getHeight(); i++) {
				for(int j = 0; j < cHeader.getWidth(); j++) {
					cHeader.cPixelVec[i][j].writePixel(outputFile);
				}
			}

		}
		else {
			cout << "Test\n";
			Pgm gHeader;
			gHeader.readPGM(inputFile);

			GrayPixel pix(255);

			cout << "read pix\n";
			for (int y = 0; y < gHeader.getHeight(); y++) {
				vector<GrayPixel> tempVec;
				for (int x = 0; x < gHeader.getWidth(); x++){
					GrayPixel newPix = pix.readGrayPixel(inputFile);
					tempVec.push_back(newPix);
				}
				gHeader.gPixelVec.push_back(tempVec);
			}

			//Flip the photo horizontally//
			HFlipPGM(gHeader, gHeader.gPixelVec);
			VFlipPGM(gHeader, gHeader.gPixelVec);

			cout << "write header\n";
			gHeader.writePGM(outputFile);

			cout << "write Pix\n";
			for(int i = 0; i < gHeader.getHeight(); i++) {
				for(int j = 0; j < gHeader.getWidth(); j++) {
					gHeader.gPixelVec[i][j].writeGrayPixel(outputFile);
				}
			}
		}



    inputFile.close();
    outputFile.close();
	}

    return 0;
}
