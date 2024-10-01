#include
int main() {
  const char *original = "Mary had a X lamb.";
  const char *toBeReplaced = "X";
  const char *replacement = "big";
  char *newString = (char *)malloc(strlen(original) + 1);
  strcpy(newString, original);
  strreplace(newString, toBeReplaced, replacement);
  printf("String after replacement: %s\n", newString);
  free(newString);
  return 0;
}