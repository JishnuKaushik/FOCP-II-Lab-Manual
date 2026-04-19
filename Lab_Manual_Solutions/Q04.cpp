/* Q4. A shopkeeper wants to calculate the total bill amount after applying a 20% discount on the purchase. Implement a solution to accept item no., quantity, and unit price. Compute the amount and apply 20% discount. */

#include <iostream>
using namespace std;

int main() {
int itemNo;
float quantity, unitPrice, amount, discount, finalAmount;

cin >> itemNo >> quantity >> unitPrice;

amount = quantity * unitPrice;
discount = amount * 0.20;
finalAmount = amount - discount;

cout << finalAmount;

return 0;

}
