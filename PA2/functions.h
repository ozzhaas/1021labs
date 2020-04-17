/*Kellen Haas
 *CPSC 1020
 *Assignment 2
 *4/17/20
*/

#include "colorPixel.h"
#include "grayPixel.h"
#include "ppm.h"
#include "pgm.h"
#include <algorithm>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <stdio.h>
#include <iostream>

using namespace std;

/*********************************************************
Function: This function will check to make sure that the
file opens properly.
Parameters: an ifstream input file by reference.
Return: true if the file opens properly and false if it
does not.
*********************************************************/
bool checkFile(ifstream&);


/*********************************************************
Function: This function will take the pixels of the image
and reverse them in order to flip the image vertically.
Parameters: a ppm header and a 2D vector of pixels
(either color or gray)
Return: void
*********************************************************/
void VFlipPPM(Ppm, vector<vector<ColorPixel> >&);

void VFlipPGM(Pgm, vector<vector<GrayPixel> >&);


/*********************************************************
Function: This function will take the pixels of the image
and swap the end of the vector with the beginning in order
to flip the image horizontally.
Parameters: a ppm header and a 2D vector of pixels
(either color or gray)
Return: void
*********************************************************/
void HFlipPPM(Ppm, vector<vector<ColorPixel> >&);

void HFlipPGM(Pgm, vector<vector<GrayPixel> >&);
