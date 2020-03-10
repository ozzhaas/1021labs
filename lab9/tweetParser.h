/*Kellen Haas
 *CPSC 1021
 *Lab9
 *3/10/20
*/

#ifndef TWEETPARSER_H
#define TWEETPARSER_H

#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <iomanip>

using namespace std;


class TweetParser {

    private:
        string type;
        string detail;
        string location;
        string latitude;
        string longitude;


    public:
        TweetParser();
        TweetParser(string, string, string, string, string);
        ~TweetParser();

        //Setters//
        void setType(string);
        void setDetail(string);
        void setLocation(string);
        void setLat(string);
        void setLon(string);

        //Getters//
        string getType();
        string getDetail();
        string getLocation();
        string getLat();
        string getLon();

};


#endif
