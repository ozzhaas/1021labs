/*Kellen Haas
*CPSC 1021
*Lab3
*1/28/20
*/


#include "stddev.h"
#include <iostream>
using namespace std;


int main() {
    int n = 0;


    cout << "\n\t~~~~Mean, Variance, Standard Deviation, Min " <<
            "and Max Calculator~~~~\t\n";
    /*Ask for the user to input the size of the array*/
    cout << "\n\t  Please type the size of your array: \n";
    cout << "\t\t";
    cin >> n;

    /*Allocate the memory for the array of float numbers*/
    float* data = new float[n];

    /*Construct the array based on the size the user provided*/
    for(int i = 0; i < n; i++) {
        data[i] = (i+1)*4;
        //cout << "data: " << data[i] << endl;
    }


    /*Declare three Stats pointers below named mean, variance, and stddev
    and allocate memory for each of the using the new operator*/
    Stats* mean = new (Stats);
    Stats* variance = new (Stats);
    Stats* stddev = new (Stats);

    cout << "\n\t  Calculations: \n";

    /*Calling function construct to calculate the mean*/
    mean->stat = construct(mean, data, n, calMean);


    /*Print the mean using the data value passed into the struct by
    the construct*/
    cout << "\t\tMean: " << setw(17) << mean->stat << endl;


    /*Calling function construct to calculate the variance*/
    variance->stat = construct(variance, data, n, calVariance);


    /*Print the variance using the data value passed into the struct by
    the construct*/
    cout << "\t\tVariance: " << setw(13) << variance->stat << endl;

    /*Calling function construct to calculate the standard deviation*/
    stddev->stat = construct(stddev, data, n, calStddev);

    /*Print the standard deviation using the data value passed into the struct by
    the construct*/
    cout << "\t\tStandard Deviation: " << setw(8) << stddev->stat << endl;

    /*Calling the function output with min and max values*/
    output(mean, variance, stddev, min);
    output(mean, variance, stddev, max);

    /*Free memory that you have allocated above for the three pointers to Stats here */
    delete mean;
    delete variance;
    delete stddev;

}
