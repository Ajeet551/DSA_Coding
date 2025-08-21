#include <stdio.h>
#if 0
int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline character from fgets
    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    char *result = strstr(str1, str2);
    if (result) {
        printf("Substring found at position: %ld\n", result - str1);
    } else {
        printf("Substring not found.\n");
    }
    
    return 0;
}
#endif
#if 0
char* my_strstr(const char* str1, const char* str2) {
    const char *p1, *p2;
    const char *p1_advance = str1;

    if (!*str2) return (char*)str1; // If str2 is empty, return str1

    while (*p1_advance) {
        p1 = p1_advance;
        p2 = str2;

        while (*p1 && *p2 && (*p1 == *p2)) {
            p1++;
            p2++;
        }

        if (!*p2) return (char*)p1_advance; // Found the substring

        p1_advance++;
    }

    return NULL; // Substring not found

}
#endif
char* my_strstr(const char* str1, const char* str2) {
    if (str1[0] == '\0' || str2[0] == '\0') {
        return (char*)str1; // If either string is empty, return str1

    }
    int i, j;
    for (i = 0; str1[i] != '\0'; i++) {
        for (j = 0; str2[j] != '\0'; j++) {
            if (str1[i + j] == '\0' || str1[i + j] != str2[j]) {
                break; // Mismatch found, break inner loop  
            }
        }
        if (str2[j] == '\0') {
            return (char*)&str1[i]; // Found the substring, return pointer to start
        }
    }
    return NULL; // Substring not found
}
int main() {
    char str1[100];
    char str2[100];
    printf("Enter the first string: ");
    scanf("%s", str1);
    getchar(); // Consume newline character left by scanf
    printf("Enter the second string: ");
    scanf("%s", str2);
    getchar(); // Consume newline character left by scanf"";
    
    char *result = my_strstr(str1, str2);
    if (result) {
        printf("Substring found at position: %ld\n", result - str1);
    } else {
        printf("Substring not found.\n");
    }
    
    return 0;
}