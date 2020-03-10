/*Kellen Haas
 *CPSC 1021
 *Lab9
 *3/10/20
*/

#include "tweetParser.h"
#include "functions.h"


using namespace std;

TweetParser::TweetParser(){}


TweetParser::TweetParser(string typ, string det, string loca, string lat, string lon){
    type = typ;
    location = loca;
    latitude = lat;
    longitude = lon;
}

TweetParser::~TweetParser() {}

//Setters//
void TweetParser::setType(string typ){
    type = typ;
}


void TweetParser::setDetail(string det){
    detail = det;
}


void TweetParser::setLocation(string loca){
    location = loca;
}


void TweetParser::setLat(string lat){
    latitude = lat;
}


void TweetParser::setLon(string lon){
    longitude = lon;
}


//Getters//
string TweetParser::getType(){
    return type;
}


string TweetParser::getDetail(){
    return detail;
}


string TweetParser::getLocation(){
    return location;
}


string TweetParser::getLat(){
    return latitude;
}


string TweetParser::getLon(){
    return longitude;
}
