#include <stdio.h>
int my_strlen(const char* str) {
    int len;
    for (len = 0; str[len] != '\0'; len++);
    return len;    
}
char* my_strncat(char* str1, const char* str2, int n) {
    int len_1 = my_strlen(str1);
    int i;
    if (str1[0] == '\0' || str2[0] == '\0') {
        return NULL;
    }
    for (i = 0; i < n; i++) {
        str1[len_1 + i] = str2[i];
    }
    str1[len_1 + i] = '\0';
    return (char*)str1;
}
int main() {
    char str1[100];
    char str2[100];
    int n;
    printf("Enter string 1: ");
    scanf("%99[^\n]", str1);
    getchar();
    printf("Enter string 2 : ");
    scanf("%99[^\n]", str2);
    getchar();
    printf("Enter a number : ");
    scanf("%d", &n);
    char* ptr = my_strncat(str1, str2, n);
    if (ptr != NULL) {
        printf("Cancatinate : %s\n", ptr);
    } else {
        printf("String not cancatinated !!\n");
    }
    return 0;
}