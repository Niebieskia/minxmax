// Name:
// Email: 
// CS 102 minmax.cpp
//
#include <iostream>

using namespace std;

int main()
{
    int numberOfInts = 0;
    cin >> numberOfInts;
    
    int min1 = 100, min2 =101, max1 = -2, max2 = -1;
    int number = 0;


    for (int i=0; i < numberOfInts; i++) {
        cin >> number;
        if (number > max2) {
            max1 = max2;
            max2 = number;
        }
        else if (number > max1) {
            max1 = number;
        }
        if (number < min1) {
            min2 = min1;
            min1 = number;
        }
        else if (number < min2) {
            min2 = number;
        }
    }
    
    cout << min1 << endl;
    cout << min2 << endl;
    cout << max1 << endl << max2 << endl;
    
    
    return 0;
}