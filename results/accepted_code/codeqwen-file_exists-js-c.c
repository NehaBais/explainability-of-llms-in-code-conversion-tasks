#include <stdio.h>
#include <sys/stat.h>

int main() {
  struct stat st;

  if (stat("input.txt", &st) == 0 && S_ISREG(st.st_mode)) {
    printf("'input.txt' exists and is a file.\n");
  } else if (stat("c:/input.txt", &st) == 0 && S_ISREG(st.st_mode)) {
    printf("'c:/input.txt' exists and is a file.\n");
  } else {
    printf("'input.txt' or 'c:/input.txt' does not exist as a regular file.\n");
  }

  if (stat("docs", &st) == 0 && S_ISDIR(st.st_mode)) {
    printf("'docs' exists and is a directory.\n");
  } else if (stat("c:/docs", &st) == 0 && S_ISDIR(st.st_mode)) {
    printf("'c:/docs' exists and is a directory.\n");
  } else {
    printf("'docs' or 'c:/docs' does not exist as a directory.\n");
  }

  return 0;
}