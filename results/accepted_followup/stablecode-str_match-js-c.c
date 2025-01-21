#include <stdio.h>
#include <string.h>

int starts_with(char *str, char *prefix) {
  return strncmp(str, prefix, strlen(prefix)) == 0;
}

size_t contains(char *str, char *substr) {
  size_t m = 0;
  for (m = strspn(str, substr); m > 0; --m) {
    if (strncmp(str + m - 1, substr, strlen(substr))) == 0)
      return m;
  }
  return 0;
}

int ends_with(char *str, char *suffix)) {
  size_t ln = strlen(str);
  size_t ls = strlen(suffix));

  if (ls > ln)
    return 0;

  return strncmp(str + ln - ls, suffix, ls) == 0;
}

int main() {
  char stringA[100] = "tacoloco";
  char stringB[100] = "co";
  size_t i;

    printf("1: Does '%s' start with '%s'? %s\n", stringA, stringB, starts_with(stringA, stringB)) ? "Yes." : "No.");

    printf("2: Is '%s' contained in '%s'? ", stringB, stringA);

    if (contains(stringA, stringB)))
        printf("%s\n", "Yes, at index " + contains(stringA, stringB)) + "."));
    else
        printf("%s\n", "No."));

    for (i = 0; i < strlen(stringA))
      ; ++i) {
      if (strncmp(stringA + i - 1, stringB, strlen(stringB))) == 0)
            printf("   In fact, it happens at index %d.\n", contains(stringA, stringB), i);
    }

    printf("3: Does '%s' end with '%s'? %s\n", stringA, stringB, ends_with(stringA, stringB)) ? "Yes." : "No.");

    return 0;
}