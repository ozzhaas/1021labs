/*Kellen Haas
 *CPSC 1021
 *Lab10
 *3/24/20
*/

#include "pixelArt.h"



int main()
{


    pixelArt p0(70,16);
    p0.readArts("art_0");
    // cout << p0 << endl;

    pixelArt p1(70,16);
    p1.readArts("art_1");
    cout << "\n\nTEST: Add 1 to ART_1\n";
    p1 = p1+1;
    cout << endl << endl;
    // cout << p1 << endl;


    pixelArt p2(70,16);
    p2.readArts("art_2");
    cout << "\n\nTEST: Add 2 to ART_2\n";
    p2 = p2+2;
    cout << endl << endl;
    // cout << p2 << endl;

    cout << "\n\nTEST: Minus 9 from ART_O\n";
    p0=p0-9;
    cout << endl << endl;

    cout << "\n\nTEST: Minus 9 from ART_1\n";
    p1=p1-9;
    cout << endl << endl;

    cout << "\n\nTEST: Minus 9 from ART_2\n";
    p2=p2-9;
    cout << endl << endl;

    cout << "\n\nTEST: ADD OBJECTS TOGETHER AND ADDING 9\n";
    p0 = p0+p1+p2;
    cout << endl << endl;

    // cout<<p0<<endl;
    // cout << p1 << endl;



}
