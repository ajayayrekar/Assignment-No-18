/*6. Write a function to check whether a given string is an alphanumeric string or not.
(Alphanumeric string must contain at least one alphabet and one digit)*/

#include <ctype.h>
#include <stdio.h>

int is_alphanumeric(char *str) {
  int has_digit = 0, has_alpha = 0;
  for (int i = 0; str[i]; i++) {
    if (isdigit(str[i])) {
      has_digit = 1;
    } else if (isalpha(str[i])) {
      has_alpha = 1;
    }
    if (has_digit && has_alpha) {
      return 1;
    }
  }
  return 0;
}
