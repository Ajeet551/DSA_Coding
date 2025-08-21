#include<stdio.h>
int my_strlen(const char *str) {
    int length = 0;
    while (*str++) {
        length++;
    }
    return length;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%99[^\n]", str); // Read string with spaces
    int length = my_strlen(str);
    printf("Length of the string is: %d\n", length);
    return 0; // Placeholder for main function
}
