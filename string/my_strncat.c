#include <stdio.h>
int my_strlen(const char* str) {
    int len;
    for (len = 0; str[len] != '\0'; len++);
    return len;
}
char* my_strncat(char* str1, const char* str2, int n) {
    if (str1[0] == '\0' || str2[0] == '\0') {
        return (char*)str1;
    }
    int len = my_strlen(str1);
    int i = 0;
    for (; i < n; i++) {
        str1[len + i] = str2[i];
    }
    str1[len + i] = '\0';
    return (char*)str1;
}
int main() {
    char str1[100], str2[100];
    int num;
    printf("Enter string 1 : ");
    scanf("%99[^\n]", str1);
    getchar();
    printf("Enter string 2 : ");
    scanf("%99[^\n]", str2);
    getchar();
    printf("Enter a number : ");
    scanf("%d", &num);
    char* ptr = my_strncat(str1, str2, num);
    if (ptr != NULL) {
        printf("my_strncat() : %s\n", ptr);
    } else {
        printf("strnig not found !!\n");
    }    
    return 0;
}