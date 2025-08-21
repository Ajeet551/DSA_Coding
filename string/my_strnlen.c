#include<stdio.h>
int my_strnlen(const char *str, int n) {
    int length = 0;
    int index = 0;
    while (*str++ && index < n) {
        length++;
        index++;
    }
    return length;
}
int main() {
    char str[100];
    int n;
    printf("Enter a string: ");
    scanf("%99[^\n]", str); // Read string with spaces
    printf("Enter a numer : ");
    scanf("%d", &n);
    int length = my_strnlen(str, n);
    printf("Length of the string is: %d\n", length);
    return 0; // Placeholder for main function
}
