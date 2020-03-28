/*Kellen Haas
 *CPSC 1021
 *Lab10
 *3/24/20
*/

#include <fstream>
#include "pixelArt.h"

//Function to read in the pixels from the input files and store them into
//2D vectors.
void pixelArt::readArts(string fileName) {
    ifstream input;
    char temp;
    int intTemp;
    input.open(fileName);
    int y = 0;

    cout << "Width: " << w << endl << "Height: " << h << endl;

    while (input >> temp){
        intTemp = temp - '0';
        vector<int> tempVec;
        for (int x = 0; x < w; x++){
            tempVec.push_back(intTemp);
        }
        pixels.push_back(tempVec);
        y++;
    }

}

//Pixel Art constructor
pixelArt::pixelArt(int iw, int ih):w(iw),h(ih) {}

//Getters
int pixelArt::getPixel(int i, int j)const {
    return pixels.at(i).at(j);
}


int pixelArt::getW()const {
    return w;
}


int pixelArt::getH()const {
    return h;
}

//Operator + Overloaded to add the num passed into the function to the
//values of the pixels vector.
pixelArt pixelArt::operator + (int num) {
// add num to every number in the 2D vector
    pixelArt tempPlus(w, h);
    vector <int> tempVec;
    for (int i = 0; i < tempPlus.getW(); i++) {
        for (int j = 0; j < tempPlus.getH(); j++) {
            tempVec.push_back(pixels[i][j] + num);
        }
        tempPlus.pixels.push_back(tempVec);
    }
    return tempPlus;
}

//Operator - Overloaded to subtract the num passed into the function from the
//values of the pixels vector.
pixelArt pixelArt::operator - (int num) {
    pixelArt tempMinus(w, h);
    vector <int> tempVec;
    for (int i = 0; i < tempMinus.getW(); i++) {
        for (int j = 0; j < tempMinus.getH(); j++) {
            tempVec.push_back(pixels[i][j] - num);
        }
        tempMinus.pixels.push_back(tempVec);
    }
    return tempMinus;
}

//Operator + Overloaded to add the values of two instances of the
//pixelArt Class
pixelArt pixelArt::operator + (const pixelArt& pa) {
    pixelArt tempObj(w, h);
    vector<int> tempVec;
    for (int i = 0; i < pa.getW(); i++) {
        for (int j = 0; j < pa.getH(); j++) {
            tempVec.push_back(pa.getPixel(i, j) + this->getPixel(i, j));
        }
        tempObj.pixels.push_back(tempVec);
    }
    // pixelArt tempAddClass(w, h);
    // tempAddClass = tempObj + pa;
    return tempObj;
}

//Operator << Overloaded to mimic cout and print the new pixelArt to the
//terminal
ostream& operator<<(ostream& os, const pixelArt& pa) {

    for (int i = 0; i < pa.getW(); i++) {
        for (int j = 0; j < pa.getH(); j++) {
            if (pa.getPixel(i, j) == 0) {
                os << pa.getPixel(i, j);
            }
            else if (pa.getPixel(i, j) == '\n') {
                os << pa.getPixel(i, j);
            // else if (i == pa.getW()) {
            //     os << '\n';
            //
            }
            else {
                // os << "test";
                os << " ";
            }

        }
    }
    // os << "test";
    return os;
}



// void output(pixelArt& pa) {
//     cout << ostream& operator<<(ostream& os, const pixelArt& pa);
// }
