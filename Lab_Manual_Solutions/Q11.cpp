/* Q11. A wholesale supplier applies 10% discount if the order > 1000 items. Implement a solution to compute total expenses and apply a discount accordingly. */

#include <iostream>
using namespace std;

int main() {
    int quantity;
    float unitPrice, total, finalAmount;

    cin >> quantity >> unitPrice;

    total = quantity * unitPrice;

    if(quantity > 1000)
        finalAmount = total - (total * 0.10);
    else
        finalAmount = total;

    cout << finalAmount;

    return 0;
}