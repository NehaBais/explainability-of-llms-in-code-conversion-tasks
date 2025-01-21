#include <stdio.h>
#include <string.h>

int main() {
  char *stringA = "tacoloco";
  const char *stringB = "co";
  int q1, q2, q3;

  // stringA starts with stringB?
  q1 = (strncmp(stringA, stringB, strlen(stringB)) == 0) ? 1 : 0;

  // stringA contains stringB?
  q2 = (strchr(stringA, *stringB) != NULL) ? strchr(stringA, *stringB) - stringA
                                           : -1;

  // multiple matches for stringB in stringA?
  int count = 0, pos[5] = {0}, i;
  for (i = 0; stringA[i]; ++i) {
    if (stringA[i] == *stringB[0]) {
      char *ptr = strstr(&stringA[i + 1], &stringB[1]);
      if (ptr)
        i += ptr - &stringA[i];
      else
        break;
    }
  }
  q3 = (count > 1 && pos[0])
           ? q3
           : 0; // Assigning zero to q3 is a temporary solution. The actual fix
                // should involve creating pointers for all indexes in the and
                // comparing them. Hence, I assign it here temporarily until the
                // proper pointers are created.

  printf("Does '%s' end with '%s'? %s\n", stringA, stringB,
         q3 ? "Yes." : "No.");
  return 0;
}