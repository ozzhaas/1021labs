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



int main (int argc, char* argv[]) {
    if (argc != 3) {
        cout << "No image file detected. Exiting program...\n";
    }

    ifstream inputFile;
    inputFile.open(argv[1]);
    ofstream outputFile;
    outputFile.open(argv[2]);


    Header head;
    head.readHeader(inputFile);

    if ((head.getMagic() == "P5") || (head.getMagic() == "P6")) {
        ColorPixel tempPixel = ColorPixel(255, 255, 255);

        vector<vector<ColorPixel> > pix;
        pix.resize(head.getHeight());
        for (unsigned int i = 0; i < pix.size(); i++) {
            pix.at(i).resize(head.getWidth());
        }

        for (int i = 0; i < head.getHeight(); i++) {
            for (int j = 0; j < head.getWidth(); j++) {
                ColorPixel tempPixel2 = tempPixel.readPixel(inputFile);
                pix.at(i).at(j) = tempPixel2;
            }
        }

        head.writeHeader(outputFile);
        for (int i = 0; i < head.getHeight(); i++) {
            for (int j = 0; j < head.getWidth(); j++) {
                pix.at(i).at(j).writePixel(outputFile);
            }
        }
    }

    else if ((head.getMagic() == "P2") || (head.getMagic() == "P3")) {



    }


    inputFile.close();
    outputFile.close();

    return 0;
}
