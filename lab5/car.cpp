/*Kellen Haas
 *CPSC 1021
 *Lab5
 *2/11/20
*/

#include "car.h"


Car::Car() {}

Car::~Car() {}

void Car::setMake(string mk) {make = mk;}


void Car::setModel(string md) {model = md;}


void Car::setYear(int yr) {year = yr;}


void Car::setPrice(double pr) {price = pr;}


string Car::getMake() {return make;}


string Car::getModel() {return model;}


int Car::getYear() {return year;}


double Car::getPrice() {return price;}


string Car::printCarInfo(Car tempCar) {
    stringstream string;


    string << "Make:" << setw(19) << right << make << "\n" << "Model:" << setw(18) << right << model << "\n";

    if (tempCar.getYear() < 1990) {
        string << "Year:" << setw(19) << right << year << " (Classic Car!)" << "\n" << "Price:" << setw(10) << right << "$" << fixed << setprecision(2) << price << "\n";
    }
    else {
        string << "Year:" << setw(19) << right << year << "\n" << "Price:" << setw(10) << right << "$" << fixed << setprecision(2) << price << "\n";
    }

    return string.str();
}


bool Car::isClassic() {
    Car tempCar;

    if (tempCar.getYear() < 1990) {return true;}
    else {return false;}

    return false;
}
