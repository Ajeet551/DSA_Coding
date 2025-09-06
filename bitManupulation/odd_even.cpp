#include <iostream>
using namespace std;
bool even_odd(int num) {
    if ((num & 1) == 1) {
        return true;
    } else {
        return false;
    }
}
int main() {
    int num;
    cout << "Enter a number to check even or odd : ";
    cin >> num;
    if (even_odd(num) == true) {
        cout << "Odd !!" << endl;
    } else {
        cout << "Even !!" << endl;
    }
    return 0;
}