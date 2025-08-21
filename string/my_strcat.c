#include <stdio.h>
int my_strlen(const char* str) {
    int len;
    for (len = 0; str[len] != '\0'; len++);
    return len;    
}
char* my_strcat(char* str1, const char* str2) {
    int len_1 = my_strlen(str1);
    int i;
    if (str1[0] == '\0' || str2[0] == '\0') {
        return NULL;
    }
    for (i = 0; str2[i] != '\0'; i++) {
        str1[len_1 + i] = str2[i];
    }
    str1[len_1 + i] = '\0';
    return (char*)str1;
}
int main() {
    char str1[100];
    char str2[100];
    printf("Enter string 1: ");
    scanf("%99[^\n]", str1);
    getchar();
    printf("Enter string 2 : ");
    scanf("%99[^\n]", str2);
    getchar();
    char* ptr = my_strcat(str1, str2);
    if (ptr != NULL) {
        printf("Cancatinate : %s\n", ptr);
    } else {
        printf("String not cancatinated !!\n");
    }
    return 0;
}