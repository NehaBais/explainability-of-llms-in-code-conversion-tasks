#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>

int main() {
  struct stat st_fileA;
  if (stat("file.txt", &st_fileA) == 0)
    printf("%ld B\n", (long)st_fileA.st_size);

  struct stat st_fileB;
  if (stat("/file.txt", &st_fileB) == 0)
    printf("%ld B\n", (long)st_fileB.st_size);

  return 0;
}