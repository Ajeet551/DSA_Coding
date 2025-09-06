#include <iostream>
using namespace std;
bool powerof_2(int num) {
    if ((num & (num - 1)) == 0) {
        return false;
    } else {
        return true;
    }
}
int main() {
    int num;
    cout << "Enter a number to check power of 2 : ";
    cin >> num;
    if (powerof_2(num)) {
        cout << "Not power of 2" << endl;
    } else {
        cout << "Power of 2" << endl;
    }
    return 0;
}