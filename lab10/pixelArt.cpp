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
    string line;
    char temp;
    vector<char> garbage;
    int intTemp;
    input.open(fileName);


    for(int y = 0; y < h; y++) {
        vector<int> tempVec;
        for (int x = 0; x < w+1; x++){
            input.get(temp);
            if (temp == '\n') {
                garbage.push_back(temp);
            }
            else {
                intTemp = temp - '0';
                tempVec.push_back(intTemp);
            }
        }
        pixels.push_back(tempVec);
    }

    // Second Option
    // while (getline(input, line)) {
    //     vector<int> tempVec;
    //     for (int x = 0; x < w; x++){
    //             temp = line[x];
    //             intTemp = temp - '0';
    //             tempVec.push_back(intTemp);
    //     }
    //     pixels.push_back(tempVec);
    // }

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
    pixelArt tempPlus(w, h);

    for (int i = 0; i < h; i++) {
        vector <int> tempVec;
        for (int j = 0; j < w; j++) {
            int newNum = pixels[i][j] + num;
            tempVec.push_back(newNum);
        }
        tempPlus.pixels.push_back(tempVec);
    }
    return tempPlus;
}



//Operator - Overloaded to subtract the num passed into the function from the
//values of the pixels vector.
pixelArt pixelArt::operator - (int num) {
    pixelArt tempMinus(w, h);


    for (int i = 0; i < h; i++) {
        vector <int> tempVec;
        for (int j = 0; j < w; j++) {
            int newNum = pixels[i][j] - num;
            // cout << newNum;
            tempVec.push_back(newNum);
        }
        tempMinus.pixels.push_back(tempVec);
        // cout << endl;
    }
    return tempMinus;
}



//Operator + Overloaded to add the values of two instances of the
//pixelArt Class
pixelArt pixelArt::operator + (const pixelArt& pa) {
    pixelArt tempObj(w, h);


    for (int i = 0; i < h; i++) {
        vector<int> tempVec;
        for (int j = 0; j < w; j++) {
            tempVec.push_back(pa.pixels[i][j] + this->pixels[i][j]);
        }
        tempObj.pixels.push_back(tempVec);
    }
    return tempObj;
}



//Operator << Overloaded to mimic cout and print the new pixelArt to the
//terminal
ostream& operator<<(ostream& os, const pixelArt& pa) {

    for (int i = 0; i < pa.getH(); i++) {
        for (int j = 0; j < pa.getW(); j++) {
            if (pa.pixels[i][j] == 9) {
                os << " ";
            }
            else {
                os << pa.pixels[i][j];
            }

        }
        os << endl;
    }
    return os;
}
