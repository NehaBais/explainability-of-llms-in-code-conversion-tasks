#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to determine if first string starts with second string
int startswith(const char *str, const char *pre) {
  return strncmp(str, pre, strlen(pre)) == 0;
}

// Function to determine if first string contains the second string at any
// location
char *find_substring(const char *str, const char *sub) {
  char *p = strstr(str, sub);
  return (p) ? p : NULL; // If not found returns null. Otherwise pointer to
                         // beginning of match
}

// Function to determine if first string ends with the second string
int endswith(const char *str, const char *suf) {
  size_t str_len = strlen(str);
  size_t suf_len = strlen(suf);

  return str_len >= suf_len &&
         0 == strncmp(str + str_len - suf_len, suf, suf_len);
}

int main() {
  const char *str1 = "abcd";
  const char *str2 = "ab";

  printf("%d\n",
         startswith(str1, str2)); // returns 1 (true) if string starts with 'ab'

  const char *suf = "zn";
  printf("%d\n",
         endswith(str1, suf)); // returns 0 (false) if string ends with 'zn'

  const char *str3 = "abab";
  const char *sub = "ab";

  printf("%s\n", find_substring(str3, sub)
                     ? "True"
                     : "False"); // return 'True' if str contains 'ab'

  char *loc = find_substring(str3, "bb");
  printf("%s\n",
         loc ? "True"
             : "False"); // return 'False' if string does not contain 'bb'

  loc = find_substring(str3, "ab");
  printf("%s\n",
         loc ? --(loc - str3) : "False"); // returns the position of first
                                          // occurrence in string if found

  char *next = find_substring(loc + 1, sub);
  printf("%s\n",
         next ? --(next - str3)
              : "False"); // return position of second occurrence (if any)

  return <｜begin▁of▁sentence｜ > 0;
}