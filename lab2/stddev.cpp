/*Kellen Haas
 *CPSC 1021
 *Lab2
 *1/21/20
*/

#include "stddev.h"


using namespace std;



void stats (float *data, int n) {
    float sum = 0;
    float mean = 0;
    float sqr[n];
    float sumOfSqrs;
    float meanOfSqrs = 0;

    for (int i = 0; i < n; i++) {
        sum += data[i];
    }

    mean = sum / n;
    for (int j = 0; j < n; j++) {
        sqr[j] = pow((data[j] - mean), 2);
    }

    for (int k = 0; k < n; k++) {
        sumOfSqrs += sqr[k];
    }

    float stdDeviation = 0;
    meanOfSqrs = sumOfSqrs / n;
    stdDeviation = sqrt(meanOfSqrs);

    cout << "The standard deviation is: " << stdDeviation << endl;

}
