#include <stdio.h>
int my_strncmp(const char* str1, const char* str2, int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (str1[i] == str2[i]) {
            if (str1[i] == '\0') {
                return 0;
            }
        } else {
            return (unsigned char)str1[i] - (unsigned char)str2[i];
        }
    }
    return 0;
}
int main() {
    char str1[100];
    char str2[100];
    int n;
    printf("Enter string 1 : ");
    scanf("%99[^\n]", str1);
    getchar();
    printf("Enter string 2 : ");
    scanf("%99[^\n]", str2);
    getchar();
    printf("Enter a number : ");
    scanf("%d", &n);

    int ret = my_strncmp(str1, str2, n);
    if (ret > 0) {
        printf("String 1 is greater !!\n");
    } else if (ret < 0) {
        printf("String 2 is greater !!\n");
    } else {
        printf("Both the strings are same !!\n");
    }
    return 0;
}