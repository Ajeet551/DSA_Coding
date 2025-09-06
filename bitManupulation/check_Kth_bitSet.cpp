#include <iostream>
using namespace std;
bool check_Kth_bitSet(int num, int bit_pos) {
    if (num & (num << bit_pos)) {
        return true;
    } else {
        return false;
    }
}
int main() {
    int num;
    cout << "Enter a number : ";
    cin >> num;
    int bit_pos;
    cout << "Enter a bit pos : ";
    cin >> bit_pos;
    if (check_Kth_bitSet(num, bit_pos) == true) {
        cout << "Given bit pos is set !!" << endl;
    } else {
        cout << "Given bit pos is not set !!" << endl;
    }
    return 0;
}
