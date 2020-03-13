/*Kellen Haas
 *CPSC 1021
 *Lab9
 *3/13/20
*/

#include "tweetParser.h"
#include "functions.h"


using namespace std;

/**************************************************************************
  Function: printTweet
  Parameters:input file stream passed by reference and a TweetParser
  object passed by reference.
  Return Type: void
  Purpose: this function will take the tweet object passed into it and
  print all of the values from the tweet
  (type, detail, location, latitude, longitude)
***************************************************************************/
void printTweet(fstream& input, TweetParser& tweets) {
        cout << "Type:" << right << fixed << "           " << tweets.getType()
             << endl;
        cout << "Detail:" << right << fixed << "         " << tweets.getDetail()
             << endl;
        cout << "Location:" << right << fixed << "       " << tweets.getLocation()
             << endl;
        cout << "Latitude:" << right << fixed << "       " << tweets.getLat()
             << endl;
        cout << "Longitude:" << right << fixed << "      " << tweets.getLon()
             << endl << endl;
}


/**************************************************************************
  Function: readTweet
  Parameters: input file stream passed by reference, a TweetParser object
  passed by reference, and the number of lines as an int passed by reference.
  Return Type: void
  Purpose: Read all of the information from the input file, call the parser
  function to break up the content, and then store the content into the proper
  class members.
***************************************************************************/
void readTweet(fstream& input, TweetParser& tweets, int& numofLines){
    string line;
    char typs[] = "#typ ";
    char dets[] = "#det ";
    char locs[] = "#loc ";
    char lats[] = "#lat ";
    char lons[] = "#lng ";

    cout << "\n\n\t\tWelcome to Tweeter\n\n";
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~Your Feed~~~~~~~~~~~~~~~~~~~~~~\n";
    while (getline(input, line)) {

        string stringTyp = parser(line, typs);
        for (unsigned int i = 0; i < sizeof(stringTyp); i++){
            toUpper(stringTyp[i]);
        }
        tweets.setType(stringTyp);

        string stringDet = parser(line, dets);
        tweets.setDetail(stringDet);

        string stringLoc = parser(line, locs);
        tweets.setLocation(stringLoc);

        string stringLat = parser(line, lats);
        tweets.setLat(stringLat);

        string stringLon = parser(line, lons);
        tweets.setLon(stringLon);
        numofLines++;
        printTweet(input, tweets);
    }
}



/**************************************************************************
  Function: parser
  Parameters: a string for the line and a string for the category of the content
  (typ, det, loc, lat, lng)
  Return Type: string that is fully parsed
  Purpose: take the line string passed into the function and use the find()
  function in C++ to find the first instance of the specific category also
  passed in as a parameter. Then it will create a substr with the typ value
  and then it will find the semicolon. It will create a new substr from the start
  of the previous substr to the semicolon. It will finally return this string
  that is fully parsed.
***************************************************************************/
string parser(string line, string category) {
    char semi[] = ";";
    size_t pos = line.find(category);
    string newLine = line.substr(pos+5, ';');
    size_t semipos = newLine.find(semi);
    string tempString = newLine.substr(0, semipos);
    return tempString;
}

/*Transforms the typ category to uppercase for output*/
void toUpper(char& lower) {
    lower = toupper(lower);
}


/*Checks to see if the file opened properly*/
void isOpen(fstream& file, char* fileName, ios::openmode openFor){
    file.open(fileName, openFor);
    if (file.fail()) {
        cout << "The file " << fileName << " did not open correctly.\n";
        cout << "Exiting the program...\n";
    }
}


/*Checks the number of command line arguments*/
bool checkArgs(int argc){
    if (argc != 2) {
        cout << "No input file provided. Try again.\n";
        return false;
    }
    return true;
}
