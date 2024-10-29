#include <stdio.h>
#include <string.h>

void replace_substring(char *original, char *toBeReplaced, char *replacement) {
  char buffer[100]; // Assuming max length of original string is 99 characters
  char *ptr = strstr(original, toBeReplaced);

  if (ptr != NULL) {
    strncpy(buffer, original, ptr - original);
    buffer[ptr - original] =
        '\0'; // Null terminate the first part of original string

    sprintf(buffer + (ptr - original), "%s%s", replacement,
            ptr + strlen(toBeReplaced));
  } else {
    printf("Substring not found\n");
    return;
  }

  strcpy(original, buffer); // Copy the modified string back to original
}

int main() {
  char original[100] = "Mary had a X lamb.";
  replace_substring(original, "X", "big");
  printf("String after replacement: %s\n", original);

  return 0;
}