#include <stdio.h>
#include <sys/stat.h>

int main() {
  FILE *fileA = fopen("file.txt", "r");
  if (fileA) {
    struct stat st;
    fstat(fileno(fileA), &st);
    printf("%,d B\n", st.st_size);
    fclose(fileA);
  }

  FILE *fileB = fopen("/file.txt", "r");
  if (fileB) {
    struct stat st;
    fstat(fileno(fileB), &st);
    printf("%,d B\n", st.st_size);
    fclose(fileB);
  }

  return 0;
}