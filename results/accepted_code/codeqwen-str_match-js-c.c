#include <regex.h>
#include <stdio.h>
#include <string.h>

int main() {
  char stringA[] = "tacoloco";
  char stringB[] = "co";
  int q1, q2multi, m;
  regmatch_t matches[10]; // Array to hold the match results
  q1 = (strncmp(stringA, stringB, strlen(stringB)) == 0);

  // Using POSIX regular expressions for multiple occurrences of a string
  regex_t re;
  regcomp(&re, stringB, REG_EXTENDED | REG_NOSUB); // Compile the regex

  q2multi = regexec(&re, stringA, 10, matches, 0);
  int q2matches[10] = {0};
  int numMatches = 0;
  while (!(q2multi != REG_NOMATCH)) {
    if (numMatches >= 10) // Check if we have enough space to store matches
      break;
    q2matches[numMatches++] =
        matches[0].rm_so; // Store the start offset of the match
    q2multi = regexec(&re, stringA + matches[0].rm_eo, 10 - numMatches,
                      &matches[numMatches],
                      REG_NOTBOL); // Find next match after current one
  }
  regfree(&re);

  char stringAEnd[strlen(stringA)];
  strncpy(stringAEnd, stringA + strlen(stringA) - strlen(stringB),
          strlen(stringB));
  stringAEnd[strlen(stringB)] = '\0'; // Null-terminate the string
  q3 = (strcmp(stringAEnd, stringB) == 0);

  printf("1: Does '%s' start with '%s'? %s\n", stringA, stringB,
         q1 ? "Yes" : "No");
  if (q2multi == 0 && numMatches > 0) {
    printf("2: Is '%s' contained in '%s'? Yes, at index(es) ", stringB,
           stringA);
    for (int i = 0; i < numMatches; ++i) {
      if (i != 0)
        printf(", ");
      printf("%d", q2matches[i]);
    }
    printf(".\n");
  } else if (q2multi == REG_NOMATCH) {
    printf("2: Is '%s' contained in '%s'? No.\n", stringB, stringA);
  }

  if (numMatches > 1) {
    printf("In fact, it happens %d times within '%s', At index%s %s.\n",
           numMatches, stringA, (numMatches > 1 ? "es" : ""), q2matches[0]);
  }

  printf("3: Does '%s' end with '%s'? %s\n", stringA, stringB,
         q3 ? "Yes" : "No");

  return 0;
}