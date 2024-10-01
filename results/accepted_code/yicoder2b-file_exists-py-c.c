#include <stdio.h>
#include <unistd.h>

int main() {
  if (access("input.txt", F_OK) == 0) {
    printf("File input.txt exists\n");
  } else {
    printf("File input.txt does not exist\n");
  }

  if (access("/input.txt", F_OK) == 0) {
    printf("File /input.txt exists\n");
  } else {
    printf("File /input.txt does not exist\n");
  }

  if (access("docs", F_OK) == 0) {
    printf("Directory docs exists\n");
  } else {
    printf("Directory docs does not exist\n");
  }

  if (access("/docs", F_OK) == 0) {
    printf("Directory /docs exists\n");
  } else {
    printf("Directory /docs does not exist\n");
  }

  return 0;
}