#include <ctype.h> // for islower() and toupper() functions
#include <stdio.h>
#include <string.h>

int strcasecmp(const char *s1, const char *s2) {
  while (*s1 && *s2) {
    if (tolower(*((unsigned const char *)s1)) !=
        tolower(*((unsigned const char *)s2)))
      return -1; /* not equal */
    ++s1;
    ++s2;
  }
  if (*s1 || *s2)
    return -1; /* not equal, one of the strings is shorter */
  else
    return 0; /* strings are equal */
}

void compare(char *A, char *B) {
  // Rest of your code...
}
int main() {
  compare("Hello", "Hello");
  // Rest of your tests...
}