#include <iostream>
using namespace std;
// Naive Solution TC: O(n^2)
// Efficient solution TC: O(n*n^1/2)
void isPrime(int num) {
    for (int j = 1; j <= num; j++) {    //TC = O(n)
        int flag = 0;
        //for (int i = 2; i < j; i++) { //TC = O(n)
        for (int i = 2; i*i < j; i++) { //TC = O(sqrt(n)) much better than O(n)
            if (j % i == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0 && j != 1) {
            cout << j << " ";
        }
    }
    cout << endl;   
}
int main() {
    int num;
    cout << "Enter the max range for getting prime : ";
    cin >> num;
    isPrime(num);
    return 0;
}

