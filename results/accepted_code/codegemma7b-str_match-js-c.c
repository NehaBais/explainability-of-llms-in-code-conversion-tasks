#include <string.h>

int main() {
  const char *stringA = "tacoloco";
  const char *stringB = "co";

  // stringA starts with stringB
  int q1 = strncmp(stringA, stringB, strlen(stringB)) == 0;

  // stringA contains stringB
  int q2 = strstr(stringA, stringB) != NULL;

  // multiple matches
  int q2multi = 0;
  int q2matches[100] = {0};
  char *p = strstr(stringA, stringB);
  while (p != NULL) {
    q2matches[q2multi++] = p - stringA;
    p = strstr(p + strlen(stringB), stringB);
  }

  // stringA ends with stringB
  int q3 = strncmp(stringA + strlen(stringA) - strlen(stringB), stringB,
                   strlen(stringB)) == 0;

  printf("1: Does '%s' start with '%s'? %s\n", stringA, stringB,
         q1 ? "Yes." : "No.");
  printf("2: Is '%s' contained in '%s'? %s", stringB, stringA,
         q2 ? "Yes, at index " : "No.");
  if (q2 && q2multi > 1) {
    printf("   In fact, it happens %d times within '%s', at index%s %d.\n",
           q2multi, stringA, q2multi > 1 ? "es" : "", q2matches[0]);
  }
  printf("3: Does '%s' end with '%s'? %s\n", stringA, stringB,
         q3 ? "Yes." : "No.");

  return 0;
}