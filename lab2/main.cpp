/*Kellen Haas
 *CPSC 1021
 *Lab2
 *1/21/20
*/

#include "stddev.h"

using namespace std;

int main () {
    int nums = 0;
    int arrayNum = 4;

    cout << "How many numbers are in your array?\n";
    cin >> nums;

    float *data = new float[nums];

    for (int i = 0; i < nums; i++) {
        data[i] = arrayNum;
        arrayNum += 4;
    }

    stats(data, nums);

    delete data;

    return 0;

}
