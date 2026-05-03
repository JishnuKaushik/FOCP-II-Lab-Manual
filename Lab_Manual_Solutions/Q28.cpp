/* Q28. A data processing system classifies even and odd inputs separately. Implement a solution to store 5 elements in an array, compute sum of all even and sum of all odd numbers. */

#include <iostream>
using namespace std;

int main() {
    int arr[5], evenSum = 0, oddSum = 0;

    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
        if(arr[i] % 2 == 0)
            evenSum += arr[i];
        else
            oddSum += arr[i];
    }

    cout << evenSum << " " << oddSum;

    return 0;
}