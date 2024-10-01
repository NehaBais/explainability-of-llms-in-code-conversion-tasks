#include <stdio.h>
#include <string.h>

int main(void) {
  char stringA[] = "tacoloco";
  char stringB[] = "co";
  int q1, q2;

  // stringA starts with stringB
  q1 = strncmp(stringA, stringB, sizeof(stringB) - 1);

  // stringA contains stringB
  q2 = (strstr(stringA, stringB) != NULL);

  printf("1: Does '");
  for (int i = 0; i < sizeof(stringA); i++) {
    if (stringA[i] == '\0')
      break;
    printf("%c", stringA[i]);
  }
  printf("' start with '");
  for (int i = 0; i < sizeof(stringB) - 1; i++) {
    if (stringB[i] == '\0')
      break;
    printf("%c", stringB[i]);
  }
  printf("'? %s\n", (q1 == 0) ? "Yes." : "No.");

  printf("2: Is '");
  for (int i = 0; i < sizeof(stringB); i++) {
    if (stringB[i] == '\0')
      break;
    printf("%c", stringB[i]);
  }
  printf("' contained in '");
  for (int i = 0; i < sizeof(stringA); i++) {
    if (stringA[i] == '\0')
      break;
    printf("%c", stringA[i]);
  }
  printf("'? %s\n", (q2) ? "Yes." : "No.");

  return 0;
}