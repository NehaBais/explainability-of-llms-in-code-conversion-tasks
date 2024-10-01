#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "abc文字化けdef";
  int n = 2;
  int m = 3;

  // Print the substring starting from index n with length m
  printf("%s\n", &s[n] + strncat(&s[n], "\0",
                                 m)); // Null termination added for simplicity

  // Print all characters starting at index n
  printf("%s\n", s + n);

  // Print the substring without the last character of the string
  printf(
      "%s\n",
      &s[0] +
          strcspn(&s[0],
                  "\1")); // Null termination added for simplicity and to avoid
                          // out-of-bounds access at the end of the string

  // Print the substring starting with 'b' with length m
  int cpos = strncat(strchr(&s[0], 'b'), "\0",
                     m); // Null termination added for simplicity and to avoid
                         // out-of-bounds access at the end of the string
  printf("%s\n",
         &s[cpos / m] + cpos % m); // Removing extra characters if necessary

  // Print the substring starting with "けd" with length m
  int spos = strncat(&s[0], "けd",
                     m); // Null termination added for simplicity and to avoid
                         // out-of-bounds access at the end of the string
  printf("%s\n",
         &s[spos / m] + spos % m); // Removing extra characters if necessary
}