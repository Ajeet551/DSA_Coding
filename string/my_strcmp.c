#include <stdio.h>
int my_strcmp(const char* str1, const char* str2) {
    int i;
    for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        if (str1[i] > str2[i]) {
            return 1;
        } else if (str1[i] < str2[i]) {
            return -1;
        } else {
            return 0;
        }
    }
}
int main() {
    char str1[100];
    char str2[100];

    printf("Enter a string 1 : ");
    scanf("%99[^\n]", str1);
    getchar();
    printf("Enter a string 2 : ");
    scanf("%99[^\n]", str2);
    getchar();

    int ret = my_strcmp(str1, str2);
    if (ret > 0) {
        printf("str1 is greater !!\n");
    } else if (ret < 0) {
        printf("str1 is lesser than str2 !!\n");
    } else {
        printf("Both the strings are equal !!\n");
    }
    return 0;
}