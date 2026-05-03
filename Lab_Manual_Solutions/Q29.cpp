/* Q29. A weather monitoring app records 30-day temperature logs. Implement a solution to store daily temperatures in an array and display the minimum temperature for the month. */

#include <iostream>
using namespace std;

int main() {
    float temp[30], minVal;

    for(int i = 0; i < 30; i++) {
        cin >> temp[i];
    }

    minVal = temp[0];

    for(int i = 1; i < 30; i++) {
        if(temp[i] < minVal)
            minVal = temp[i];
    }

    cout << minVal;

    return 0;
}