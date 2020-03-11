/*Kellen Haas
 *CPSC 1021
 *Lab9
 *3/10/20
*/

#include "tweetParser.h"
#include "functions.h"


using namespace std;


void readTweet(fstream& input, TweetParser& tweets){
    string line;
    string words[300];
    string noHash;
    string typs;
    string dets;
    string locs;
    string lats;
    string lons;
    int numofLines = 0;
    int i = 0;


    while (getline(input, noHash, '#')) {
        stringstream string(noHash);
        getline(string, line, ';');
        stringstream wordStream(line);
        while (wordStream >> words[i]) {
            cout << "Pos: " << i << " " << words[i] << endl;
            numofLines++;
            i++;
        }
    }

    for (int j = 0; j < numofLines; j++) {
        if (words[j] == "typ"){
            if (words[j+2] == "det") {
                tweets.setType(words[j+1]);
            }
            else {
                typs = words[j + 1] + " " + words[j + 2];

                tweets.setType(typs);
            }
            cout << "Category: " << tweets.getType() << endl;
        }
        else if (words[j] == "det") {
            int start = words[j].find("det");
            int end = words[j].find("loc");
3

        }
        else if (words[j] == "loc") {

        }
        else if (words[j] == "lat") {

        }
        else if (words[j] == "lng") {

        }
    }


    cout << numofLines << endl;
}


void isOpen(fstream& file, char* fileName, ios::openmode openFor){
    file.open(fileName, openFor);
    if (file.fail()) {
        cout << "The file " << fileName << " did not open correctly.\n";
        cout << "Exiting the program...\n";
    }
}


bool checkArgs(int argc){
    if (argc != 2) {
        cout << "No input file provided. Try again.\n";
        return false;
    }
    return true;
}


void printTweet(fstream&){

}
