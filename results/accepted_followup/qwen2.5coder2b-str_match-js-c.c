#include <stdio.h>
#include <string.h>

int startsWith(const char *mainStr, const char *searchStr) {
  return strstr(mainStr, searchStr) == mainStr;
}

int containsSubstring(const char *mainStr, const char *searchStr) {
  return strstr(mainStr, searchStr) != NULL;
}

char *getOccurrences(const char *mainStr, const char *searchStr, int *count) {
  char *matches = NULL;
  int len;

  if ((len = strlen(searchStr)) == 0)
    return matches;

  for (int i = 0; (matches = strstr(mainStr + i, searchStr)) != NULL;) {
    i += matches - mainStr;
    (*count)++;
  }

  return matches;
}

int endsWith(const char *mainStr, const char *searchStr) {
  return strlen(searchStr) == strlen(mainStr) - strlen(searchStr);
}

int main() {
  const char stringA[] = "tacoloco";
  const char stringB[] = "co";

  int q1 = startsWith(stringA, stringB);

  if (q1) {
    printf("1: Does '%s' start with '%s'? Yes.\n", stringA, stringB);
  } else {
    printf("1: Does '%s' start with '%s'? No.\n", stringA, stringB);
  }

  int q2 = containsSubstring(stringA, stringB);

  if (q2) {
    printf("2: Is '%s' contained in '%s'? Yes.\n", stringB, stringA,
           (int)(q2 - stringA));
  } else {
    printf("2: Is '%s' contained in '%s'? No.\n", stringB, stringA);
  }

  int count = 0;
  char *matches = getOccurrences(stringA, stringB, &count);

  if (matches != NULL) {
    printf("   In fact, it happens %d times within '%s', at index%s %s\n",
           count, stringA, (count > 1 ? "es" : ""), matches);
  } else {
    printf("2: No occurrences found.\n");
  }

  int q3 = endsWith(stringA, stringB);

  if (q3) {
    printf("3: Does '%s' end with '%s'? Yes.\n", stringA, stringB);
  } else {
    printf("3: Does '%s' end with '%s'? No.\n", stringA, stringB);
  }

  return 0;
}