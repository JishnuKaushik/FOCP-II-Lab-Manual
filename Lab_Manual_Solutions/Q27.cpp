/* Q27. A supermarket software maintains item price lists. Implement a solution to store the prices of 10 items in an array and display the maximum price. */

#include <iostream>
using namespace std;

int main() {
    float price[10], maxVal;

    for(int i = 0; i < 10; i++) {
        cin >> price[i];
    }

    maxVal = price[0];

    for(int i = 1; i < 10; i++) {
        if(price[i] > maxVal)
            maxVal = price[i];
    }

    cout << maxVal;

    return 0;
}