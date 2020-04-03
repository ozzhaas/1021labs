//Garbage comments from pixelArt.cpp


//Line 28 readArts Function
for (int i = 0; i < w; i++) {
    for (int j = 0; j < h; j++) {
        cout << pixels.at(i).at(j);
    }
}
cout << endl;



//Line 63 Operator+ Function
cout << "\n~~~~~~~~~~~Pixels before adding " << num << " ~~~~~~~~~~~\n";
for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
        cout << pixels[i][j];
    }
    cout << endl;
}



//Line 89 Operator- Function
for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
        cout << pixels[i][j];
    }
    cout << endl;
}


//Line 117 Operator+ Function to add two objects
for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
        cout << pixels[i][j];
    }
    cout << endl;
}


//Line 124 Operator+ Function to add two objects
cout << "\n~~~~~~~~~~~Pixels after adding the objects together~~~~~~~~~~~\n";
for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
        cout << tempObj.pixels.at(i).at(j);
    }
    cout << endl;
}
