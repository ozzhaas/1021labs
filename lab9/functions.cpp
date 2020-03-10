/*Kellen Haas
 *CPSC 1021
 *Lab9
 *3/10/20
*/

#include "tweetParser.h"
#include "functions.h"


using namespace std;


void readTweet(fstream& input, vector<TweetParser>& vec){
    string line;
    vector<string> words;
    string typs = "typ";
    string dets = "det";
    string locs = "loc";
    string lats = "lat";
    string lons = "lng";
    int numofLines = 0;
    int i = 0;

    while (getline(input, line, '#')) {
        stringstream s(line);
        while (s >> words) {
            TweetParser tweets;
        

            cout << words << endl;
            if (words == "typ") {
                numofLines++;
            }
        }
    }
    for (unsigned int i = 0; i < sizeof(words); i++) {
        // size_t position = word.find("#typ:");
        // TweetParser.setType(word.substr())
        // word
    }

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
