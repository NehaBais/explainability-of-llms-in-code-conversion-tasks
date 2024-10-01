#include <stdio.h>
#include <string.h>

int main() {
  char stringA[] = "tacoloco";
  char stringB[] = "co";
  int lenB = strlen(stringB);
  char subString[100];

  // stringA starts with stringB
  strncpy(subString, stringA, lenB);
  subString[lenB] = '\0';
  if (strcmp(subString, stringB) == 0)
    printf("1: Does '%s' start with '%s'? Yes.\n", stringA, stringB);
  else
    printf("1: Does '%s' start with '%s'? No.\n", stringA, stringB);

  // stringA contains stringB
  char *pos = strstr(stringA, stringB);
  if (pos != NULL)
    printf("2: Is '%s' contained in '%s'? Yes, at index %ld.\n", stringB,
           stringA, pos - stringA);
  else
    printf("2: Is '%s' contained in '%s'? No.\n", stringB, stringA);

  // stringA ends with stringB
  if (strncmp(stringA + strlen(stringA) - lenB, stringB, lenB) == 0)
    printf("3: Does '%s' end with '%s'? Yes.\n", stringA, stringB);
  else
    printf("3: Does '%s' end with '%s'? No.\n", stringA, stringB);

  return 0;
}