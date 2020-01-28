#include<iostream>
#include<cmath>

using namespace std;
using std::pow;


// create a struct Stats below this comment
// struct members are a float variable and a pointer that can point to
// calMean, calVariance, or calStdev functions below

struct Stats {
    float stat;
    float (*calculate)(float* data, int n);
};


float calMean(float* data, int n);
float calVariance(float* data, int n);
float calStdev(float* data, int n);

void max(Stats* s1, Stats* s2 , Stats* s3);
void min(Stats* s1, Stats* s2 , Stats* s3);


// add the prototype for function "construct" under this comment
// return type: float
// incoming parameters: a Struct pointer, a float, an int, and a pointer
// that can point to calMean, calVariance, or calStdev finctions above

float construct(Stats*, float*, int, float (*calFuncPtr)(float*, int));


// add the prototype for function "output" under this comment
// return type: void
// incoming parameters: three Stats pointers, and a pointer that can point
// to either min or max functions declared above
void output(Stats*, Stats*, Stats*, void (*maxOrMin)(Stats*, Stats*, Stats*));
