#include <stdio.h>
#include <string.h>

// Function to get a substring from a given start index and length
char *substr(const char *str, int start, int len) {
  static char buff[100]; // Adjust buffer size as needed
  int str_len = strlen(str);
  if (start >= str_len || start < 0) {
    return "";
  }
  if (start + len > str_len) {
    len = str_len - start;
  }
  memcpy(buff, str + start, len);
  buff[len] = '\0'; // Null-terminate the substring
  return buff;
}

int main() {
  const char *s = "ABCDEFGH";
  int n = 2, m = 3;

  printf("Index:  01234567\n");
  printf("String: %s\n", s);

  // starting from n characters in and of m length
  char *result = substr(s, n, m);
  printf("Start %d, length %d:    %s\n", n, m, result);

  // starting from n characters in, up to the end of the string
  result = substr(s, n, strlen(s) - n);
  printf("Start %d, to end:      %s\n", n, result);

  // whole string minus last character
  char temp[strlen(s)];
  strncpy(temp, s, strlen(s) - 1);
  temp[strlen(s) - 1] = '\0';
  printf("All but last:         %s\n", temp);

  // starting from a known character within the string and of m length
  int dx = strchr(s, 'D') - s;
  result = substr(s, dx, m);
  printf("Start 'D', length %d:  %s\n", m, result);

  // starting from a known substring within the string and of m length
  int sx = strstr(s, "DE") - s;
  result = substr(s, sx, m);
  printf("Start \"DE\", length %d: %s\n", m, result);

  return 0;
}