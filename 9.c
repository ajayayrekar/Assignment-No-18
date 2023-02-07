/*9. Write a function to reverse a string word wise. (For example if the given string is
“Mysirg Education Services” then the resulting string should be “Services Education
Mysirg” )*/
#include <stdio.h>
#include <string.h>

void reverse_words(char *str) {
    int i, j, k, len = strlen(str);
    char temp;

    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    for (i = 0, j = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            for (k = j; k < i / 2 + j; k++) {
                temp = str[k];
                str[k] = str[i - k + j - 1];
                str[i - k + j - 1] = temp;
            }
            j = i + 1;
        }
    }
}
