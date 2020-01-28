/*Kellen Haas
*CPSC 1021
*Lab3
*1/28/20
*/


#include "stddev.h"
using namespace std;

float calMean(float* data, int n){
    float mean = 0;

    for(int i = 0; i < n; i++) {
        mean += data[i];
    }
    return mean/float(n);
}


float calVariance(float* data, int n){
    float mean = 0;

    for(int i = 0; i < n; i++) {
        mean+=data[i];
    }

    mean/=float(n);
    float variance = 0;

    for(int i = 0; i < n; i++) {
        variance+= pow(data[i] - mean,2.0);
    }

    return variance/n;
}


float calStdev(float* data, int n){
    float mean = 0;

    for(int i = 0; i < n; i++) {
        mean += data[i];
    }

    mean/=float(n);
    float variance = 0;

    for(int i = 0; i < n; i++) {
        variance += pow(data[i] - mean,2.0);
    }
    variance/=float(n);

    return sqrt(variance);
}


// add implementation for function construct below this comment.
// return type: float
// incoming parameters: a Struct pointer, a float, an int, and a pointer
// that can point to calMean, calVariance, or calStdev finctions above
float construct(Stats* sptr, float* value, int x, float (*calFuncPtr)(float*, int)) {

    sptr->calculate = calFuncPtr;
    sptr->stat = calFuncPtr(value, x);

    return sptr->stat;

}


// add implementation for function output below this comment.
// return type: void
// incoming parameters: three Stats pointers, and a pointer that can point
// to either min or max functions declared above
void output(Stats* s1, Stats* s2, Stats* s3, void (*maxOrMin)(Stats*, Stats*, Stats*)) {

    maxOrMin(s1, s2, s3);
}






void min(Stats* s1, Stats* s2, Stats* s3){
    float min = 10000;

    if(s1->stat>s2->stat) {
        min = s2->stat;
    }
    else {
        min = s1->stat;
    }

    if(min > s3->stat) {
        min = s3->stat;
    }
    cout << "min: " << min << endl;
}


void max(Stats* s1, Stats* s2, Stats* s3){
    float max = -10000;

    if(s1->stat<s2->stat) {
        max = s2->stat;
    }
    else {
        max = s1->stat;
    }
    if(max < s3->stat) {
        max = s3->stat;
    }
    cout << "max: " << max << endl;
}
