/*Kellen Haas
 *CPSC 1021
 *Lab9
 *3/10/20
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
#include <tuple>
#include "tweetParser.h"

void readTweet(fstream&, TweetParser&);
void isOpen(fstream&, char*, ios::openmode);
bool checkArgs(int);
void printTweet(fstream&);


#endif
