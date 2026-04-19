/* Q8. A monitoring system generates a sequence of numeric event IDs from 1 to N. Events divisible by 3 are tagged as “Buzz”, divisible by 5 as “Fuzz”, and divisible by both receive both tags. */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        if(i % 3 == 0 && i % 5 == 0)
            cout << "BuzzFuzz";
        else if(i % 3 == 0)
            cout << "Buzz";
        else if(i % 5 == 0)
            cout << "Fuzz";
        else
            cout << i;

        cout << endl;
    }

    return 0;
}