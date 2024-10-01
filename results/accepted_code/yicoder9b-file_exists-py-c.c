#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
  struct stat st;

  // Check file "input.txt" in current working directory
  if (stat("input.txt", &st) == 0 && S_ISREG(st.st_mode)) {
    printf("File input.txt exists in the current directory\n");
  } else {
    printf("File input.txt does not exist in the current directory \n");
  }

  // Check file "/input.txt" at root directory
  if (stat("/input.txt", &st) == 0 && S_ISREG(st.st_mode)) {
    printf("File /input.txt exists in the root filesystem\n");
  } else {
    printf("File /input.txt does not exist in the root filesystem \n");
  }

  // Check directory "docs" in current working directory
  if (stat("docs", &st) == 0 && S_ISDIR(st.st_mode)) {
    printf("Directory docs exists in the current directory\n");
  } else {
    printf("Directory docs does not exist in the current directory \n");
  }

  // Check directory "/docs" at root directory
  if (stat("/docs", &st) == 0 && S_ISDIR(st.st_mode)) {
    printf("Directory /docs exists in the root filesystem\n");
  } else {
    printf("Directory /docs does not exist in the root filesystem \n");
  }
  return 0;
}