#include <stdio.h>
#include <string.h>

int main() {
  char stringA[] = "tacoloco";
  char stringB[] = "co";
  int q1, q2, q3;
  int q2matches[strlen(stringA)];
  int q2matchCount = 0;

  // stringA starts with stringB
  if (strncmp(stringA, stringB, strlen(stringB)) == 0) {
    q1 = 1;
  } else {
    q1 = 0;
  }

  // stringA contains stringB
  int indexOfStringB = strstr(stringA, stringB) - stringA;
  if (indexOfStringB != -1) {
    q2 = 1;
  } else {
    q2 = 0;
  }

  // multiple matches
  char *match = stringA;
  while ((match = strstr(match, stringB)) != NULL) {
    q2matches[q2matchCount++] = match - stringA;
    match++;
  }

  // stringA ends with stringB
  int lenStringB = strlen(stringB);
  if (strlen(stringA) >= lenStringB &&
      strncmp(&stringA[strlen(stringA) - lenStringB], stringB, lenStringB) ==
          0) {
    q3 = 1;
  } else {
    q3 = 0;
  }

  printf("1: Does '%s' start with '%s'? %s\n", stringA, stringB,
         q1 ? "Yes." : "No.");

  if (q2) {
    printf("2: Is '%s' contained in '%s'? Yes, at index %d.\n", stringB,
           stringA, indexOfStringB);
    if (q2matchCount > 0) {
      printf("   In fact, it happens %d times within '%s', at indices%s %d",
             q2matchCount, stringA, (q2matchCount > 1) ? "es" : "",
             q2matches[0]);
      for (int i = 1; i < q2matchCount; i++) {
        printf(", %d", q2matches[i]);
      }
      printf(".\n");
    }
  } else {
    printf("2: Is '%s' contained in '%s'? No.\n", stringB, stringA);
  }

  printf("3: Does '%s' end with '%s'? %s\n", stringA, stringB,
         q3 ? "Yes." : "No.");

  return 0;
}