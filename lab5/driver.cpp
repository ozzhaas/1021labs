/*Kellen Haas
 *CPSC 1021
 *Lab5
 *2/11/20
*/

#include "car.h"


int main () {

/****************************************************************************
    Create temporary variables for main, m_varName, and initialize them to
    default values.
****************************************************************************/
    int m_year = 0;
    string m_make = "default";
    string m_model = "default";
    float m_price = 1.00;


/****************************************************************************
    Using filestream from C++ fstream library open the input file "raw.data"
    provided and open an output file called "formatted.data".
****************************************************************************/
    ifstream in_file;
    in_file.open("raw.data");
    ofstream out_file;
    out_file.open("formatted.data");


/****************************************************************************
    Create a count to identify the vehicles number and create the Car object
    for main called "mainCar".
****************************************************************************/
    int count = 1;

    Car mainCar;




/****************************************************************************
    Read in the data from the input file until the end of the file is
    reached. Store the values from the input file into their respective
    variables in the Car object class. We have to use the setters to do this
    because the variables are private members of the class. Then we will
    format the data in the printCarInfo function and print that out to the
    output file "out_file".
****************************************************************************/
    while (in_file >> m_year >> m_make >> m_model >> m_price) {
        out_file << "\t\tCar #" << count << ":\n";
        mainCar.setYear(m_year);
        mainCar.setMake(m_make);
        mainCar.setModel(m_model);
        mainCar.setPrice(m_price);
        out_file << mainCar.printCarInfo(mainCar);
        out_file << "\n";
        count++;
    }


/****************************************************************************
    Close the filestream files when we are finished using them.
****************************************************************************/

    in_file.close();
    out_file.close();


}
