/* Q39. In software applications such as data analytics and probability systems, combinatorial values are frequently required. As a Junior Software Developer, design a C++ program to generate Pascal’s Triangle for a given number of rows. */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int val = 1;
        for(int j = 0; j <= i; j++) {
            cout << val << " ";
            val = val * (i - j) / (j + 1);
        }
        cout << endl;
    }

    return 0;
}