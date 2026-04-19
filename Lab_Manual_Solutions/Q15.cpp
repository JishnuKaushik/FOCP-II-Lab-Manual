/* Q15. A data analytics tool finds the maximum sales figure from multiple entries. Implement a solution to accept ‘n’ numbers and display the largest. */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x, maxVal;
    cin >> x;
    maxVal = x;

    for(int i = 2; i <= n; i++) {
        cin >> x;
        if(x > maxVal)
            maxVal = x;
    }

    cout << maxVal;

    return 0;
}