//8. Write a function to count words in a given string

#include <stdio.h>
#include <string.h>

int count_words(const char *str) {
    int i, word_count = 0;
    int len = strlen(str);
    int in_word = 0;

    for (i = 0; i < len; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            word_count++;
        }
    }

    return word_count;
}
