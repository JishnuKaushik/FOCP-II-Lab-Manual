/* Q24. A typing practice app displays the alphabets in pyramid form. Implement a solution to display:
A
AB
ABC
ABCD
ABCDE */

#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < i; j++) {
            cout << char('A' + j);
        }
        cout << endl;
    }

    return 0;
}