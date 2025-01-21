#include <stdio.h>
#include <string.h> // <-- Include string.h
#define MAX 1024

void replace(char *str, char *old_word, char *new_word) {
  char buffer[MAX];
  int i = 0, j = 0;
  while (str[i]) {
    if (strncmp(&str[i], old_word, strlen(old_word)) == 0) {
      for (j = 0; new_word[j]; j++)
        buffer[i++] = new_word[j];
      i++;
    } else {
      buffer[i++] = str[i - 1];
    }
  }
  buffer[i] = '\0';
  printf("String after replacement: %s\n", buffer);
}

int main() {
  char original[] = "Mary had a X lamb.";
  char toBeReplaced[] = "X";
  char replacement[] = "little";

  replace(original, toBeReplaced, replacement);

  return 0;
}