#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "abc文字化けdef"; // Initialize a string variable named s with the
                               // value "abc文字化けdef"
  int n = 2; // Initialize an integer variable named n with the value 2
  int m = 3; // Initialize an integer variable named m with the value 3

  printf("%s\n", s + n); // Print 3 characters starting at index n (c文字)

  printf("%s\n",
         s + n); // Print all characters starting at index n (c文字化けdef)

  printf("%s\n",
         s + n - 1); // Print all characters except the last (abc文字化けde)

  char *cpos =
      strchr(s, 'b'); // Find the position of the character 'b' in the string s
  if (cpos != NULL) {
    printf("%s\n", cpos + m); // Print 3 characters starting with 'b' (bc文)
  } else {
    printf("Character 'b' not found.\n");
  }

  char *spos = strstr(
      s, "けd"); // Find the position of the substring "けd" in the string s
  if (spos != NULL) {
    printf("%s\n", spos + m); // Print 3 characters starting with "けd" (けde)
  } else {
    printf("Substring 'けd' not found.\n");
  }

  return 0;
}