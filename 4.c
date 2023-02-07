//4. Write a function to transform string into uppercase
#include <ctype.h>
#include <stdio.h>

void to_upper(char *str) {
  for (int i = 0; str[i]; i++) {
    str[i] = toupper(str[i]);
  }
}
