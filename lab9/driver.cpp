/*Kellen Haas
 *CPSC 1021
 *Lab9
 *3/10/20
*/

#include "tweetParser.h"
#include "functions.h"


using namespace std;

int main (int argc, char* argv[]) {

    if (!checkArgs(argc)) {
        return 1;
    }

    fstream input;
    isOpen(input, argv[1], ios::in);

    TweetParser tweets;


    readTweet(input, tweets);









    return 0;
}
