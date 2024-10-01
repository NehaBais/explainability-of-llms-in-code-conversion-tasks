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
  q3 = (count > 1 && pos[0]) ? count : 0;

  // print results
  printf("Does '");
  puts(stringA);
  printf("' start with '");
  puts(stringB);
  printf("'? %s.\n", q1 ? "Yes." : "No.");
  if (q2 >= 0) {
    printf("Is '");
    puts(stringB);
    printf("' contained in '");
    puts(stringA);
    printf("'? %s, at index %d.\n", q2 ? "Yes." : "No.", q2);
  } else {
    printf("Is '");
    puts(stringB);
    printf("' contained in '");
    puts(stringA);
    printf("'? No.\n");
  }
  if (q3 > 1) {
    printf("In fact, it happens %d times within '%s', at index%s ", q3, stringA,
           pos[0] ? "es" : "");
    for (i = 1; i < q3; ++i)
      printf(", %d", pos[i]);
    printf(".\n");
  }
  printf("Does '");
  puts(stringA);
  printf("' end with '");
  puts(stringB);
  printf("'? %s.\n", q3 ? "Yes." : "No.");

  return 0;
}