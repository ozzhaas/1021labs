/*Kellen Haas
 *CPSC 1020
 *Assignment 1
 *2/27/20
*/

#include "colorPixel.h"
#include "grayPixel.h"
#include "replicator.h"
#include "header.h"


//
// class Singleton {
//
//     private:
//         Singleton(){}
//         Singleton(const Singleton& obj){}
//         ~Singleton() {}
//
//     public:
//         static Singleton* instance;
//         static Replicator* replicate();
//         if (instance == NULL) {
//             instance = new Replicator();
//             return instance;
//         }
//
// };

bool checkFile(ifstream& inputFile) {
	while (!inputFile.fail()){
		return true;
	}
cout << "Input file failed to open." << endl;
return false;
}



int main (int argc, char* argv[]) {
    if (argc != 3) {
        cout << "No image file detected. Exiting program...\n";
    }

    ifstream inputFile;
    inputFile.open(argv[1], ios::binary);
    ofstream outputFile;
    outputFile.open(argv[2], ios::binary);

    if (checkFile(inputFile) == true) {

        Header head;
        head.readHeader(inputFile);

        if ((head.getMagic() == "P5") || (head.getMagic() == "P6")) {
            ColorPixel tempPix(255, 255, 255);
            vector<ColorPixel> VecOfPix;

            VecOfPix.resize(head.getHeight() * head.getWidth());
            for (unsigned int i = 0; i < VecOfPix.size(); i++) {
                ColorPixel pix = tempPix.readPixel(inputFile);
                VecOfPix.at(i) = pix;
                // cout << tempPix.getRed() << " " << tempPix.getGreen() << " " << tempPix.getBlue() << endl;
            }


            head.writeHeader(outputFile);
            for (unsigned int j = 0; j < VecOfPix.size(); j++) {
                VecOfPix.at(j).writePixel(outputFile);
            }

        // else if ((head.getMagic() == "P2") || (head.getMagic() == "P3")) {
        //
        //
        //
        // }
        }
    }
    inputFile.close();
    outputFile.close();

    return 0;
}
