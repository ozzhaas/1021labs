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
    int intTemp;
    input.open(fileName);

    cout << "Width: " << w << endl << "Height: " << h << endl;

    for(int y = 0; y < h; y++) {
        // input >> temp;
        getline(input, line);
        intTemp = line[y] - '0';
        // intTemp = temp - '0';
        vector<int> tempVec;
        for (int x = 0; x < w; x++){
            tempVec.push_back(intTemp);
        }
        pixels.push_back(tempVec);
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
    pixelArt tempPlus(w, h);

    cout << "\n~~~~~~~~~~~New numbers to push to vector" << " ~~~~~~~~~~~\n";
    for (int i = 0; i < h; i++) {
        vector <int> tempVec;
        for (int j = 0; j < w; j++) {
            int newNum = pixels[i][j] + num;
            cout << newNum;
            tempVec.push_back(newNum);
        }
        tempPlus.pixels.push_back(tempVec);
        cout << endl;
    }

    cout << "\n~~~~~~~~~~~Pixels after adding " << num << " ~~~~~~~~~~~\n";
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cout << tempPlus.pixels[i][j];
        }
        cout << endl;
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
            tempVec.push_back(pixels[i][j] - num);
        }
        tempMinus.pixels.push_back(tempVec);
    }

    cout << "\n~~~~~~~~~~~Pixels after subtracting~~~~~~~~~~~\n";
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
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


    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            tempVec.push_back(pa.pixels[i][j] + this->pixels[i][j]);
        }
        tempObj.pixels.push_back(tempVec);
    }

    pixelArt tempAddClass(w, h);
    tempAddClass = tempObj + pa;
    return tempAddClass;
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
