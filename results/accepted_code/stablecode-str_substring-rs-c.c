#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "abc文字化けdef";
  int n = 2;
  int m = 3;

  // Print 3 characters starting at index 2 (c文字)
    printf("%.*s\n", m, strchrnuc(s, n)) );

    // Print all characters starting at index 2 (c文字化けdef)
    printf("%s\n", strchrnuc(s, n)));

    // Print all characters except the last (abc文字化けde)
    char* substr = malloc(strlen(s) - 1));
    for (int i = 0; i < strlen(s) - 1; i++) {
      substr[i] = s[i];
    }
    printf("%s\n", substr));

    // Print 3 characters starting with 'b' (bc文)
    char *bpos = strchrnuc(s, n);
    for (int i = 0; i < strlen(s) - 1; i++) {
      if (s[i] == *bpos)) {
            printf("%.*s\n", m, &s[i]));
            break;
        }
    }

    // Print 3 characters starting with "けd" (けde)
    char *kpos = strchrnuc(s, n);
    for (int i = 0; i < strlen(s) - 1; i++) {
      if (s[i] == *kpos)) {
            printf("%.*s\n", m, &s[i]));
            break;
        }
    }

    return 0;
}