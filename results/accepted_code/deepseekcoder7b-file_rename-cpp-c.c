#include <stdio.h>

int main() {
  rename("input.txt", "output.txt");
  rename("docs", "mydocs");
  // rename("/input.txt", "/output.txt");  /* You cannot change the root
  // directory */ rename("/docs", "/mydocs");            /* You cannot change
  // the root directory */
  return 0;
}