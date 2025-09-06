#include <iostream>
using namespace std;
int findLastBitPos(int num) {
    int countLastBit = 0;
    while (num > 1) {
        num >>= 1;
        countLastBit++;
    }
    return countLastBit;
}
bool hasOnlyFirstLastBitSet(unsigned int num) {
    int totalBits = findLastBitPos(num);
    unsigned int firstBit = 1;
    unsigned int lastBit = 1 << totalBits;
    return num == (firstBit | lastBit);
}
int main() {
    int num;
    cout << "Enter a number : ";
    cin >> num;

    if (hasOnlyFirstLastBitSet(num) == true) {
        cout << "The number has 1st and last bit is set !!" << endl;
    } else {
        cout << "The number has 1st and last bit is not set !!" << endl;
    }
    return 0;
}