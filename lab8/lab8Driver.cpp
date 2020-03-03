#include "lab8.h"


using namespace std;


int main () {

    float R[h][w];
    float G[h][w];
    float B[h][w];

    for (int i = h - 1; i >= 0; i--) {
        for (int k = 0; k < w; k++) {
            R[i][k] = 0.0;
            G[i][k] = 0.0;
            B[i][k] = 1.0;
        }
    }

    Pixel mainPix(R, G, B);

    ofstream output;
    output.open("color.ppm");
    if ((checkFile(output)) == false) {
        cout << "Error opening output image." << endl;
    }
    else {
        writePixel(output, mainPix);
    }

    return 0;
}
