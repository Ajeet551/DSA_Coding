#include <iostream>
using namespace std;
int set_clear_toggle(int num, int bit_pos, int sel_flag) {
    if (sel_flag == 1) {
        /* Set a bit pos */
        num |= (num << bit_pos);
        return num;
    } else if (sel_flag == 2) {
        /* Clear a bit pos */
        num &= ~(num << bit_pos);
        return num;
    } else {
        /* Toggle a bit pos */
        num ^= (num << bit_pos);
        return num;
    }
}
int main() {
    int num;
    int bit_pos;
    int sel_flag;
    cout << "Enter a number : ";
    cin >> num;
    cout << "Enter bit pos : ";
    cin >> bit_pos;
    cout << "1) Set a bit : \n2) Clear a bit : \n3) Toggle a bit : ";
    cin >> sel_flag;
    int ret = set_clear_toggle(num, bit_pos, sel_flag);
    if (sel_flag == 1) {
        cout << "After set a bit position : " << ret << endl;
    } else if (sel_flag == 2) {
        cout << "After clear a bit position : " << ret << endl;
    } else {
        cout << "After toggle a bit position : " << ret << endl;
    }
    return 0;
}