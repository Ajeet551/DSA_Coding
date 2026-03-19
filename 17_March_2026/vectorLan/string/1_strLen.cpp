#include <iostream>
using namespace std;
int my_strLen(char *str) {
    int count = 0;
    while (*str != '\0') {
        count++;
        str++;
    }
    return count;
}
int main() {
    int size;
    cout << "Enter the string size : ";
    cin >> size;
    char str[size];
    cout << "Enter a string : ";
    cin >> str;
    int len = my_strLen(str);
    cout << "strLen : " << len << endl;
    return 0;
}

