#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Custom function to reverse a string
void reverse_string(char* str) {
    int start = 0;
    int end = strlen(str) - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

// Custom case-insensitive comparison
int str_casecmp(const char *str1, const char *str2) {
    while (*str1 && *str2) {
        if (tolower((unsigned char)*str1) != tolower((unsigned char)*str2)) {
            return 0;  // Strings are not equal
        }
        str1++;
        str2++;
    }
    return (*str1 == *str2);  // Return true if both strings are the same length and identical
}

int main() {
    char str1[20] = "Hello";

    // Convert to lowercase (alternative to strlwr)
    for (int i = 0; str1[i]; i++) {
        str1[i] = tolower((unsigned char)str1[i]);
    }
    printf("Lower case: %s\n", str1);

    // Convert to uppercase (alternative to strupr)
    for (int i = 0; str1[i]; i++) {
        str1[i] = toupper((unsigned char)str1[i]);
    }
    printf("Upper case: %s\n", str1);

    // Append string 2 to string 1
    strcat(str1, " World");
    printf("Append: %s\n", str1);

    // Append n characters of string 2 to string 1
    strncat(str1, " World", 3);
    printf("Append n: %s\n", str1);

    // Copy string 2 to string 1
    strcpy(str1, "Hello");
    printf("Copy: %s\n", str1);

    // Copy n characters of string 2 to string 1
    strncpy(str1, "Hello World", 5);
    str1[5] = '\0';  // Null-terminate after strncpy
    printf("Copy n: %s\n", str1);

    // Set all characters of string 1 to given character (alternative to strset)
    memset(str1, '*', 20);  // Set all characters to '*'
    str1[19] = '\0';  // Null-terminate the string
    printf("Set: %s\n", str1);

    // Set first n characters of string 1 to given character (using memset)
    memset(str1, '/', 3);  // Set the first 3 characters to '/'
    str1[3] = '\0';  // Null-terminate the string
    printf("Set: %s\n", str1);

    // Reverse string (alternative to strrev)
    reverse_string(str1);
    printf("Reverse: %s\n", str1);

    // Get the length of the string
    printf("Length: %d\n", (int)strlen(str1));

    // Return first occurrence of character in string
    printf("Char: %c\n", (char)strchr(str1, 'l'));

    // Return last occurrence of character in string
    printf("Char: %c\n", (char)strrchr(str1, 'l'));

    // String compare all characters
    printf("Compare: %d\n", strcmp(str1, "Hello"));

    // String compare n characters
    printf("Compare n: %d\n", strncmp(str1, "Hello World", 5));

    // String compare case insensitive (alternative to stricmp)
    printf("Compare: %d\n", str_casecmp(str1, "hello"));

    // String compare n characters case insensitive (alternative to strnicmp)
    printf("Compare n: %d\n", str_casecmp(str1, "hello world"));

    // String compare all characters case insensitive (alternative to strcasecmp)
    printf("Compare: %d\n", str_casecmp(str1, "Hello"));

    return 0;
}
