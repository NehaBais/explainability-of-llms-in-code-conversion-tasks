#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to get a substring from n characters in and of m length
void sub_str(char *str, int n, int m) {
  if ((n + m) <= strlen(str)) {
    for (int i = 0; i < m; i++) {
      printf("%c", str[i + n]);
    }
  } else {
    fprintf(stderr, "Invalid index");
  }
}
// Function to get a substring from n characters in up to the end of string
void sub_str1(char *str, int n) {
  for (int i = n; i < strlen(str); i++) {
    printf("%c", str[i]);
  }
}
// Function to get whole string minus the last character
void sub_str2(char *str) {
  for (int i = 0; i < strlen(str) - 1; i++) {
    printf("%c", str[i]);
  }
}
// Function to get a substring from known character within string and of m
// length
void sub_str3(char *str, char c, int m) {
  if ((strchr(str, c) != NULL)) {
    for (int i = 0; strchr(str, c) - str + i < m; i++) {
      printf("%c", str[strchr(str, c) - str + i]);
    }
  } else {
    fprintf(stderr, "Character not found");
  }
}
// Function to get a substring from known substring within string and of m
// length
void sub_str4(char *str, char *sub, int m) {
  if ((strstr(str, sub) != NULL)) {
    for (int i = 0; strstr(str, sub) - str + i < m; i++) {
      printf("%c", str[strstr(str, sub) - str + i]);
    }
  } else {
    fprintf(stderr, "Substring not found");
  }
}