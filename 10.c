//10. Write a function to find the repeated character in a given string.

#include <stdio.h>
#include <string.h>

char find_repeated_char(const char *str) {
    int i, j, len = strlen(str);
    char repeated_char = '\0';

    for (i = 0; i < len; i++) {
        for (j = i + 1; j < len; j++) {
            if (str[i] == str[j]) {
                repeated_char = str[i];
                break;
            }
        }
        if (repeated_char != '\0') {
            break;
        }
    }

    return repeated_char;
}
