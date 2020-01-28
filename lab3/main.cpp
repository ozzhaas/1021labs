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

    cout << "Please type the size of your array: \n";
    cin >> n;

    float* data = new float[n];

    for(int i = 0; i < n; i++) {
        data[i] = (i+1)*4;
        //cout << "data: " << data[i] << endl;
    }


    // declare three Stats pointers below named mean, variance, and stdev
    // and allocate memory for each of the using malloc, calloc or new
    Stats* mean = new (Stats);
    Stats* variance = new (Stats);
    Stats* stdev = new (Stats);



    // calling function construct to calculate the mean
    mean->stat = construct(mean, data, n, calMean);


    // print the mean below this comment
    cout << "Mean: " << mean->stat << endl;


    // calling function construct to calculate the variance
    variance->stat = construct(variance, data, n, calVariance);


    // print the variance below this comment
    cout << "Variance: " << variance->stat << endl;

    // calling function construct to calculate the stdev
    stdev->stat = construct(stdev, data, n, calStdev);


    // print the variance below this comment
    cout << "Standard Deviation: " << stdev->stat << endl;

    // calling function output with min and max
    output(mean, variance, stdev, min);
    output(mean, variance, stdev, max);

    // free memory that you have allocated above for the three pointers to Stats here

}
