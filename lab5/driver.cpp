/*Kellen Haas
 *CPSC 1021
 *Lab5
 *2/11/20
*/

#include "car.h"


int main () {
    int m_year = 0;
    string m_make = "default";
    string m_model = "default";
    float m_price = 1.00;

    ifstream in_file;
    in_file.open("raw.data");
    ofstream out_file;
    out_file.open("formatted.data");

    int count = 1;

    Car mainCar;

    while (in_file >> m_year >> m_make >> m_model >> m_price) {
        out_file << "\t\tCar #" << count << ":\n";
        mainCar.setYear(m_year);
        mainCar.setMake(m_make);
        mainCar.setModel(m_model);
        mainCar.setPrice(m_price);
        out_file << mainCar.printCarInfo(mainCar);

        count++;
    }





    in_file.close();
    out_file.close();










}
