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
    string words;
    vector<string> vecWords;
    const string typs = "typ";
    const string dets = "det";
    const string locs = "loc";
    const string lats = "lat";
    const string lons = "lng";
    int numofLines = 0;

    while (getline(input, words, '#')) {
        stringstream string(line);
        string >> words;
        int pos = words.find(';');
        cout << words.substr(0, pos) << endl;
        vecWords.push_back(words);

        // vecWords.push_back(words);
        vector<TweetParser> tweets;
        numofLines++;
    }


    for (unsigned int i = 0; i < vecWords.size(); i++){
        if (vecWords.at(i) == typs) {
            vecWords.erase(vecWords.at(i));
        }
        cout << vecWords.at(i) << endl;
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
