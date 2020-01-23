/*Kellen Haas
 *CPSC 1021
 *Lab2
 *1/21/20
*/

#include "stddev.h"


using namespace std;


/*Computation Function for the calculation of the standard deviation*/
void stats (float *data, int n) {
    float sum = 0;
    float mean = 0;
    float sqr[n];
    float sumOfSqrs;
    float meanOfSqrs = 0;


    /*Calculate the sum of the array numbers*/
    for (int i = 0; i < n; i++) {
        sum += data[i];
    }

    /*Calculate the mean of the array numbers*/
        mean = sum / n;

    /*Square the mean from the previous calculation*/
        for (int j = 0; j < n; j++) {
            sqr[j] = pow((data[j] - mean), 2);
        }

    /*Add the squared means together to get the sum of the squared means*/
        for (int k = 0; k < n; k++) {
            sumOfSqrs += sqr[k];
        }

        float stdDeviation = 0;

    /*Find the mean of the sum of the squared means*/
        meanOfSqrs = sumOfSqrs / n;

    /*Calculate the standard deviation by square rooting the mean of the sum of
    the squared means*/
        stdDeviation = sqrt(meanOfSqrs);

    /*Print out the standard deviation to the user*/
        cout << "The standard deviation is: " << stdDeviation << endl;

}
