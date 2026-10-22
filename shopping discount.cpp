#include <iostream>
using namespace std;

int main() {
    float bill, amount;
    cout << "Enter bill amount: ";
    cin >> bill;

    if (bill >= 1000)
        amount = bill - (bill * 10 / 100);
    else
        amount = bill;

    cout << "Amount to pay: " << amount;

    return 0;
}
