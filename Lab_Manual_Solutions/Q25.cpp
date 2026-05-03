/* Q25. A security system generates list of prime keys within given range. Implement a solution to display all prime numbers between two limits. */

#include <iostream>
using namespace std;

int main() {
    int start, end;
    cin >> start >> end;

    for(int i = start; i <= end; i++) {
        if(i <= 1) continue;

        bool isPrime = true;

        for(int j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if(isPrime)
            cout << i << " ";
    }

    return 0;
}