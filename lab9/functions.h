/*Kellen Haas
 *CPSC 1021
 *Lab9
 *3/13/20
*/

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include "tweetParser.h"

void readTweet(fstream&, TweetParser&, int&);
void isOpen(fstream&, char*, ios::openmode);
string parser(string, string);
void toUpper(char&);
bool checkArgs(int);
void printTweet(fstream&, TweetParser&);


#endif
