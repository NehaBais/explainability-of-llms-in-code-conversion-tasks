#include
int main() {
  char str[] = "Mary had a %s lamb";
  char txt[] = "little";
  char out[100];

  extern int sprintf(char *, const char *, ...); // Declare sprintf as external
  sprintf(out, str, txt); // Call sprintf to perform string interpolation
  printf("%s", out);      // Print the result

  return 0;
}