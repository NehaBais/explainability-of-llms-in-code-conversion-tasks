#include <stdio.h>
#include <string.h>

int main() {
  char stringA[] = "tacoloco";
  char stringB[] = "co";
  int q1, q2, q3;

  // Determine if stringA starts with stringB
  q1 = strncmp(stringA, stringB, strlen(stringB));

  // Determine if stringA contains stringB
  q2 = (int)strstr(stringA, stringB);

  // Determine if stringA ends with stringB
  q3 = strcmp(stringA + strlen(stringA) - strlen(stringB), stringB);

  printf("1: Does '%s' start with '%s'? %s\n", stringA, stringB,
         (q1 == 0 ? "Yes" : "No"));
  printf("2: Is '%s' contained in '%s'? %s\n", stringB, stringA,
         (q2 != NULL ? "Yes, at index " + q2.toString() : "No"));
  printf("3: Does '%s' end with '%s'? %s\n", stringA, stringB,
         (q3 == 0 ? "Yes" : "No"));

  return 0;
}