/* Q30. A payroll system maintains employee salary records. Implement a solution to accept salary of 10 employees in an array, compute total salary and average salary, then display the result. */

#include <iostream>
using namespace std;

int main() {
    float salary[10], total = 0, avg;

    for(int i = 0; i < 10; i++) {
        cin >> salary[i];
        total += salary[i];
    }

    avg = total / 10;

    cout << total << " " << avg;

    return 0;
}