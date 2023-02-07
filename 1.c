//1. Write a function to calculate length of the string
#include <stdio.h>
#include <string.h>

int length(char *str)
{
  int len = 0;
  while (*str != '\0')
  {
    len++;
    str++;
  }
  return len;
}
