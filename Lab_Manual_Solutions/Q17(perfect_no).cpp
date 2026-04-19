/* Q17. A learning application analyzes numbers for mathematical properties. Design a solution to check whether a given number is a Perfect number or an Armstrong number. */

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;

    for(int i = 1; i <= n/2; i++) {
        if(n % i == 0)
            sum += i;
    }

    if(sum == n)
        cout << "Perfect Number";
    else
        cout << "Not Perfect Number";

    return 0;
}