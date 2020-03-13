/*Kellen Haas
 *CPSC 1021
 *Lab9
 *3/13/20
*/

#include "tweetParser.h"
#include "functions.h"


using namespace std;


/*Read in the command line arguments to determine the input file name*/
int main (int argc, char* argv[]) {
    int numofLines = 0;

/*Check to make sure that the correct number of arguments were entered
  on the command line. */
    if (!checkArgs(argc)) {
        return 1;
    }

/*Create input file and open the tweets.txt file from the command line*/
    fstream input;
    isOpen(input, argv[1], ios::in);

/*Create the TweetParser object to pass to the read and write functions*/
    TweetParser tweets;

/*Call the read tweets function to read all of the tweets from the input file*/
    readTweet(input, tweets, numofLines);

    return 0;
}
