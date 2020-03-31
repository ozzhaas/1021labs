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

    cout << "Width: " << w << endl << "Height: " << h << endl;

    while (input >> temp){
        intTemp = temp - '0';
        vector<int> tempVec;
        for (int x = 0; x < w; x++){
            tempVec.push_back(intTemp);
        }
        pixels.push_back(tempVec);
    }

    // for (int i = 0; i < w; i++) {
    //     for (int j = 0; j < h; j++) {
    //         cout << pixels.at(i).at(j);
    //     }
    // }
    // cout << endl;

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
    vector <int> tempVec(0, 0);

    cout << "\n~~~~~~~~~~~Pixels before adding " << num << " ~~~~~~~~~~~\n";
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cout << pixels[i][j];
        }
        cout << endl;
    }

    tempPlus.pixels.clear();
    tempVec.clear();

    cout << "\n~~~~~~~~~~~New numbers to push to vector" << " ~~~~~~~~~~~\n";
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            int newNum = pixels[i][j] + num;
            cout << newNum;
            tempVec.push_back(newNum);
            tempPlus.pixels.push_back(tempVec);
        }
        // tempPlus.pixels.push_back(tempVec);
        cout << endl;
    }



    cout << "\n~~~~~~~~~~~Pixels after adding " << num << " ~~~~~~~~~~~\n";
    for (int i = 0; i < tempPlus.getH(); i++) {
        for (int j = 0; j < tempPlus.getW(); j++) {
            cout << pixels[i][j];
        }
        cout << endl;
    }
    return tempPlus;
}

//Operator - Overloaded to subtract the num passed into the function from the
//values of the pixels vector.
pixelArt pixelArt::operator - (int num) {
    pixelArt tempMinus(w, h);
    vector <int> tempVec;

    // for (int i = 0; i < h; i++) {
    //     for (int j = 0; j < w; j++) {
    //         cout << pixels[i][j];
    //     }
    //     cout << endl;
    // }


    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            tempVec.push_back(abs(pixels[i][j] - num));
        }
        tempMinus.pixels.push_back(tempVec);
    }

    cout << "\n~~~~~~~~~~~Pixels after subtracting~~~~~~~~~~~\n";
    for (int i = 0; i < tempMinus.getH(); i++) {
        for (int j = 0; j < tempMinus.getW(); j++) {
            cout << tempMinus.pixels[i][j];
        }
        cout << endl;
    }
    return tempMinus;
}

//Operator + Overloaded to add the values of two instances of the
//pixelArt Class
pixelArt pixelArt::operator + (const pixelArt& pa) {
    pixelArt tempObj(w, h);
    vector<int> tempVec;

    // for (int i = 0; i < h; i++) {
    //     for (int j = 0; j < w; j++) {
    //         cout << pixels[i][j];
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            tempVec.push_back(pa.pixels[i][j] + this->pixels[i][j]);
        }
        tempObj.pixels.push_back(tempVec);
    }
    //
    // cout << "\n~~~~~~~~~~~Pixels after adding the objects together~~~~~~~~~~~\n";
    // for (int i = 0; i < h; i++) {
    //     for (int j = 0; j < w; j++) {
    //         cout << tempObj.pixels.at(i).at(j);
    //     }
    //     cout << endl;
    // }

    pixelArt tempAddClass(w, h);
    tempAddClass = tempObj + pa;
    return tempAddClass;
}

//Operator << Overloaded to mimic cout and print the new pixelArt to the
//terminal
ostream& operator<<(ostream& os, const pixelArt& pa) {

    for (int i = 0; i < pa.getH(); i++) {
        for (int j = 0; j < pa.getW(); j++) {
            // os << pa.pixels[i][j];
            if (pa.pixels[i][j] == 9) {
                os << " ";
            }
            else {
                // os << "test";
                os << pa.pixels[i][j];
            }

        }
        os << endl;
    }
    // os << "test";
    return os;
}



// void output(pixelArt& pa) {
//     cout << ostream& operator<<(ostream& os, const pixelArt& pa);
// }
