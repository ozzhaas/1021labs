/*Kellen Haas
 *CPSC 1021
 *Lab2
 *1/21/20
*/

#include "stddev.h"

using namespace std;

/*Main function*/
int main () {
    int nums = 0;
    int arrayNum = 4;

/*Ask the user what number they want to find the standard deviation of*/
    cout <<"\n\n\t\t|~The Standard Deviation Calculator~|\n\n";

    cout << "\nPlease enter your number or 0 to quit!\n";
    cin >> nums;


    if (nums == 0) {
        return 1;
    }
    /*Dynamically allocate memory for an array of pointers*/
    float *data = new float[nums];



    while (nums != 0) {

        for (int i = 0; i < nums; i++) {
            data[i] = arrayNum;
            arrayNum += 4;
        }

        /*Call function to calculate the standard deviation with the given array
        of numbers called "data"*/
        stats(data, nums);

        cout <<"\n\n\t\t|~The Standard Deviation Calculator~|\n\n";

        cout << "\nPlease enter your number or 0 to quit!\n";
        cin >> nums;
        if (nums == 0) {
            return 1;
        }

    }

    /*Deallocate the memory from the data pointers*/
    delete data;


    return 0;

}
