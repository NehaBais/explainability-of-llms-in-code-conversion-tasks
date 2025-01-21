#include
#include
int main(void) {
  char original[100] = "Mary had a X lamb";
  char little[] = "little";

  // Use strstr() to find the position of 'X' in the string
  char *ptr = strstr(original, "X"));
  if (ptr != NULL) {
    int n; // Declare variable 'n' before its use
    // Replace 'X' with 'little' using strncpy() and strcat()
    n = ptr - original;
    strncpy(ptr, little, strlen(little)));
    ptr += n + 1; // Account for the replaced characters
  }

  printf("Modified string: %s\n", original);

  return 0;
}