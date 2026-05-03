/* Q32. A stock market app tracks first and second highest stock values. Implement a solution to find the largest and second largest number in an array of size 5. */

#include <iostream>
using namespace std;

int main() {
    int arr[5];

    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int max1 = arr[0], max2 = arr[0];

    for(int i = 1; i < 5; i++) {
        if(arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    cout << max1 << " " << max2;

    return 0;
}