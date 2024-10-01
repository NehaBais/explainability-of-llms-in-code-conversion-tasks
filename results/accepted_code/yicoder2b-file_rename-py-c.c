#include <stdio.h>
#include <string.h>

int main() {
  // Rename here file from input.txt to output.txt
  rename("input.txt", "output.txt");

  // Directory rename from docs to mydocs in current working directory (here)
  if (rename("docs", "mydocs")) {
    perror("Error renaming current directory docs");
    return 1;
  }

  // Directory rename from docs to mydocs in filesystem root (/mydocs)
  if (rename("/"
             "mydocs")) {
    perror("Error renaming filesystem root docs");
    return 1;
  }

  return 0;
}