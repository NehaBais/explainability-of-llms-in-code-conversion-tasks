#include <stdio.h>
#include <string.h>

int main() {
  // Rename file in current working directory
  rename("input.txt", "output.txt");

  // Rename directory in current working directory
  rename("docs", "mydocs");

  // Rename file in filesystem root
  rename("/", "/output.txt");

  // Rename directory in filesystem root
  rename("/", "/mydocs");

  return 0;
}