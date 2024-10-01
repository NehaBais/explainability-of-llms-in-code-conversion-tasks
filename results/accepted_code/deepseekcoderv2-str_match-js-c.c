#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *startsWith(const char *a, const char *b) {
  int i;
  for (i = 0; a[i] != '\0' && b[i] != '\0'; ++i) {
    if (a[i] != b[i])
      return "No";
  }
  return "Yes";
}
int contains(const char *a, const char *b) {
  int i;
  for (i = 0; a[i] != '\0' && b[i] != '\0'; ++i) {
    if (a[i] == b[i])
      return 1;
  }
  return 0;
}
char *endsWith(const char *a, const char *b) {
  int len_a = strlen(a), len_b = strlen(b);
  for (int i = 0; a[len_a - i] != '\0' && b[len_b - i] != '\0'; ++i) {
    if (a[len_a - i] != b[len_b - i])
      return "No";
  }
  return "Yes";
}
void multiMatch(const char *a, const char *b) {
  int i = 0;
  while (*a != '\0') {
    for (; a[i] == b[i]; ++i)
      ;
    if (i > 1) {
      printf("'\\%s\\' is contained in '%s', at index %d.\n", b, a, i - 1);
    }
    a++;
  }
}
int main(void) {
  char *stringA = "tacoloco";
  const char *stringB = "co";
  printf("Does '%s' start with '%s'? ", stringA, stringB);
  puts(startsWith(stringA, stringB));
  int q2;
  if ((q2 = contains(stringA, stringB))) {
    printf("Is '\\%s\\' contained in '%s'? Yes, at index %d.\n", stringB,
           stringA, q2);
  } else
    printf("Is '\\%s\\' contained in '%s'? No\n", stringB, stringA);
  q2 = contains(stringA, stringB);
  multiMatch(stringA, stringB);
  printf("Does '%s' end with '%s'? ", stringA, stringB);
  puts(endsWith(stringA, stringB));
  return 0;
}