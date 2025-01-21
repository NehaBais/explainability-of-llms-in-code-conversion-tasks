#include <stdio.h>
#include <string.h>

int compare(char *a, char *b) {
  // Convert integers to strings for comparison
  char a_str[10];
  sprintf(a_str, "%d", 24);
  char b_str[10];
  sprintf(b_str, "%d", 123);

  if (strcmp(a_str, b_str) == 0) {
    printf("a is equal to b\n");
  } else if (strcmp(a_str, b_str) < 0) {
    printf("a is less than b\n");
  } else {
    printf("a is greater than b\n");
  }

  // Convert doubles to strings for comparison
  char c[10];
  sprintf(c, "%f", 5.0);
  char d[10];
  sprintf(d, "%f", 5.0);

  if (strcmp(c, d) == 0) {
    printf("c is equal to d\n");
  } else if (strcmp(c, d) < 0) {
    printf("c is less than d\n");
  } else {
    printf("c is greater than d\n");
  }
}