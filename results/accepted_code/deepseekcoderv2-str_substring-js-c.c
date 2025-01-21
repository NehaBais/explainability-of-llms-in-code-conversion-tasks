#include <stdio.h>
#include <string.h>

// Function to get a substring starting from n characters in and of m length
void substr_n_m(const char *str, int n, int m) {
  if (strlen(str) >= n + m) {
    for (int i = 0; i < m && str[n + i] != '\0'; ++i) {
      putchar(str[n + i]);
    }
    printf("\n");
  } else {
    printf("Not enough characters in the string\n");
  }
}

// Function to get a substring starting from n characters in, up to the end of
// the string
void substr_from_n(const char *str, int n) {
  if (strlen(str) >= n) {
    for (int i = 0; str[n + i] != '\0'; ++i) {
      putchar(str[n + i]);
    }
    printf("\n");
  } else {
    printf("Not enough characters in the string\n");
  }
}

// Function to get the whole string minus the last character
void substr_all_but_last(const char *str) {
  int len = strlen(str);
  if (len > 0) {
    for (int i = 0; i < len - 1; ++i) {
      putchar(str[i]);
    }
    printf("\n");
  } else {
    printf("String is empty\n");
  }
}

// Function to get a substring starting from a known character within the string
// and of m length
void substr_from_known_char(const char *str, char ch, int m) {
  int index = strchr(str, ch) - str;
  if (index != -1 && strlen(str) >= index + m) {
    for (int i = 0; i < m && str[index + i] != '\0'; ++i) {
      putchar(str[index + i]);
    }
    printf("\n");
  } else {
    printf("Character not found in the string\n");
  }
}

// Function to get a substring starting from a known substring within the string
// and of m length
void substr_from_known_substr(const char *str, const char *substr, int m) {
  int index = strstr(str, substr) - str;
  if (index != -1 && strlen(str) >= index + m) {
    for (int i = 0; i < m && str[index + i] != '\0'; ++i) {
      putchar(str[index + i]);
    }
    printf("\n");
  } else {
    printf("Substring not found in the string\n");
  }
}

int main() {
  const char *str = "abcdefgh";

  int n = 2;
  int m = 3;

  // Starting from n characters in and of m length
  substr_n_m(str, n, m); // => "cde"

  // Starting from n characters in, up to the end of the string
  substr_from_n(str, n); // => "cdefgh"

  // Whole string minus the last character
  substr_all_but_last(str); // => "abcdefg"

  // Starting from a known character within the string and of m length
  substr_from_known_char(str, 'b', m); // => "bcd"

  // Starting from a known substring within the string and of m length
  substr_from_known_substr(str, "bc", m); // => "bcd"

  return 0;
}