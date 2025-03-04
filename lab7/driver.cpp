/*Kellen Haas
 *CPSC 1021
 *Lab7
 *2/25/20
*/

#include "Dog.h"
#include "Owner.h"



using namespace std;


int main () {
    int userNum = 0;
    int ownAge = 0;
    string ownName = "default";
    string dogName = "default";
    string dogBreed = "default";
    string dogAge = "0";


    cout << "\t\t\t~~~Dog Directory~~~\n";
    cout << "Type 1 to enter dog information or 2 to print information and quit.\n";
    cin >> userNum;
    vector <Dog> vec_dogs;
    vector <string> info;
    string line;
    while (userNum == 1) {
        cout << "Enter your name: \n";
        // cin >> ownName;
        cin.ignore();
        getline(cin, ownName);
        cout << "\nEnter you age: \n";
        cin >> ownAge;
        cout << "\nEnter your dog's name, breed and age (Bella, Brittany Spaniel, 3): \n";
        cin.ignore();
        getline(cin, line);
        stringstream lineStream(line);
        getline(lineStream, dogName, ',');
        getline(lineStream, dogBreed, ',');
        getline(lineStream, dogAge, ',');
        int dogsAge = stoi(dogAge);
        Dog mainDog(dogName, dogBreed, dogsAge, ownName, ownAge);
        vec_dogs.push_back(mainDog);
        cout << "\n\nType 1 to enter dog information or 2 to print information and quit.\n";
        cin >> userNum;
        if (userNum == 2) {
            for (int k = 0; k < static_cast<int>(vec_dogs.size()); k++) {
                vec_dogs[k].printDogInfo(vec_dogs[k]);
            }
            return 0;
        }
    }

    return 0;
}
