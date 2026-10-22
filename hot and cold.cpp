#include <iostream>
using namespace std;

int main() {
    int temp;
    cout << "Enter temperature: ";
    cin >> temp;

    if (temp > 30)
        cout << "Hot";
    else
        cout << "Cold";

    return 0;
}

