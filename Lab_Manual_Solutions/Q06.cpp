/* Q6. An HR system needs to calculate employees’ net salaries, including a fixed 12% bonus for each worker. Implement a solution to accept the number of employees and their basic salary. Compute bonus, net salary, and display results. */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        float basic, bonus, net;
        cin >> basic;

        bonus = basic * 0.12;
        net = basic + bonus;

        cout << bonus << " " << net << endl;
    }

    return 0;
}