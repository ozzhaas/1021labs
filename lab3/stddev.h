#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;
using std::pow;


/********************************************************************
    a struct called Stats:
    Struct Members: a float containing the data values of the array
    and a function pointer to each of the calculate functions.
********************************************************************/
struct Stats {
    float stat;
    float (*calculate)(float* data, int n);
};


/********************************************************************
    calMean Function:
    Parameters: float* data and an int value from the struct
    Return Type: a mean float value of the array
    The function will calculate the mean of the array constructed
********************************************************************/
float calMean(float* data, int n);

/********************************************************************
    calVariance Function:
    Parameters: float* data and an int value from the struct
    Return Type: a variance float value of the array
    The function will calculate the variance of the array constructed
********************************************************************/
float calVariance(float* data, int n);

/********************************************************************
    calStddev Function:
    Parameters: float* data and an int value from the struct
    Return Type: a standar deviation float value of the array
    The function will calculate the standard deviation of the
    array constructed
********************************************************************/
float calStddev(float* data, int n);


/********************************************************************
    max Function:
    Parameters: three pointers to the Stats struct
    Return Type: void
    This function will calculate the maximum value of the
    calculations
********************************************************************/
void max(Stats* s1, Stats* s2 , Stats* s3);

/********************************************************************
    min Function:
    Parameters: three pointers to the Stats struct
    Return Type: void
    This function will calculate the minimum value of the
    calculations
********************************************************************/
void min(Stats* s1, Stats* s2 , Stats* s3);

/********************************************************************
    construct Function:
    Parameters: one pointer to the Stats struct, a float pointer,
    an int, and a function pointer that can be used to call any of
    the calculation functions to calculate the mean, variance, or
    standard deviation
    Return Type: a float value of mean, variance, or standard
    deviation
    This function will be used to call the calculation functions
    and calculate the mean, variance and standard deviation
    by passing in the data values from the struct.
********************************************************************/
float construct(Stats*, float*, int, float (*calFuncPtr)(float*, int));


/********************************************************************
    output Function:
    Parameters: three pointers to the Stats struct, and a function
    pointer that can be used to call either the min or the max
    function to calculate the minimum or the maximum value in the
    array.
    Return Type: void
    This function will be used to call the max or min functions
    and calculate the maximum or minimum of the array by passing
    in the data values from the struct.
********************************************************************/
void output(Stats*, Stats*, Stats*, void (*maxOrMin)(Stats*, Stats*, Stats*));
