#include <iostream>
using namespace std;
/* Method-1: Naive Sol, TC: O(n^2), Aux Space: O(1) */
// int countConsecutiveOnes(bool arr[], int n) {
//     int res = 0;
//     for (int i = 0; i < n; i++) {
//         int count = 0;
//         for (int j = i; j < n; j++) {
//             if(arr[j] == 1) {
//                 count++;
//             } else {
//                 break;
//             }
//         }
//         res = max(res, count);
//     }
//     return res;
// }

/* Method-2: Efficient Sol, TC: O(n), Aux Space: O(1) */
int countConsecutiveOnes(bool arr[], int n) {
    int res = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            count = 0;
        } else {
            count++;
        }
        res = max(res, count);
    }
    return res;
}
int main() {
    bool arr[] = {1, 0, 1, 1, 1, 1, 0, 1, 1, 1};
    int ret = countConsecutiveOnes(arr, 10);
    cout << "No of ones : " << ret << endl;
    return 0;
}

