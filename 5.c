//5. Write a function to transform a string into lowercase
#include <ctype.h>
#include <stdio.h>

void to_lower(char *str) {
  for (int i = 0; str[i]; i++) {
    str[i] = tolower(str[i]);
  }
}
