#include <iostream>
using namespace std;
bool powerof_4(int num) {
    if ((num > 0) && ((num & (num - 1)) == 0) && !(num & 0xAAAAAAAA)) {
        return true;
    } else {
        return false;
    }
}
int main() {
    int num;
    cout << "Enter a number to check power of 4 : ";
    cin >> num;
    if (powerof_4(num)) {
        cout << "Power of 4 !!" << endl;
    } else {
        cout << "Not power of 4 !!" << endl;
    }
    return 0;
}