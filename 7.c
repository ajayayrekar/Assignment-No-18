//7. Write a function to check whether a given string is palindrome or not.
#include <stdio.h>
#include <string.h>

int is_palindrome(char *str) {
  int len = strlen(str);
  for (int i = 0; i < len / 2; i++) {
    if (str[i] != str[len - i - 1]) {
      return 0;
    }
  }
  return 1;
}
