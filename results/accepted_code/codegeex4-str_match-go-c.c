#include <stdio.h>
#include <string.h>

void match(char *first, char *second) {
  if (strstr(first, second) == first) {
    printf("1. %s starts with %s: True\n", first, second);
  } else {
    printf("1. %s starts with %s: False\n", first, second);
  }

  char *pos = strstr(first, second);
  if (pos != NULL) {
    printf("2. %s contains %s: True, at location %ld\n", first, second,
           pos - first);

    while ((pos = strstr(pos + 1, second)) != NULL) {
      printf("2.2. at location %ld\n", pos - first);
    }
  } else {
    printf("2. %s contains %s: False\n", first, second);
  }

  char temp[strlen(first)];
  strcpy(temp, first);
  if (strstr(temp + strlen(temp) - strlen(second), second) ==
      temp + strlen(temp) - strlen(second)) {
    printf("3. %s ends with %s: True\n", first, second);
  } else {
    printf("3. %s ends with %s: False\n", first, second);
  }
}

int main() {
  match("abracadabra", "abr");
  return 0;
}