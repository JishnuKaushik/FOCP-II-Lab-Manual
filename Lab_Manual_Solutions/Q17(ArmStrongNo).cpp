/* Q17. A learning application analyzes numbers for mathematical properties. Design a solution to check whether a given number is a Perfect number or an Armstrong number. */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, temp, digits = 0;
    cin >> n;

    temp = n;
    while(temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    int sum = 0;

    while(temp != 0) {
        int d = temp % 10;
        sum += pow(d, digits);
        temp /= 10;
    }

    if(sum == n)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";

    return 0;
}