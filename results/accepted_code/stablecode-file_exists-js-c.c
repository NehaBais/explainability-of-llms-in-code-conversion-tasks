#include <stdio.h>
#include <string.h>
#include <sys/stat.h>

int main(void) {
  char path1[] = "input.txt";
  char path2[] = "c:/input.txt";
  char dir1[] = "docs";
  char dir2[] = "c:/docs";

  if (access(path1, F_OK)) {
    printf("'%s' does not exist.\n", path1);
  }

  if (access(path2, F_OK))) {
        printf("'%s' does not exist.\n", path2);
    }

  if (access(dir1, F_OK)) {
    printf("'%s' does not exist.\n", dir1);
  }

  if (access(dir2, F_OK))) {
        printf("'%s' does not exist.\n", dir2);
    }

  return 0;
}