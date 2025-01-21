#include
#include
#include
int main() {
  struct stat attr;
  for (char *file[] = {"input.txt", "docs", "/input.txt", "/docs"};
       *file != NULL; file++) {
    if (stat(*file, &attr) == 0) {
      if (S_ISDIR(attr.st_mode)) {
        printf("%s is a directoryn", *file);
      } else {
        printf("%s is a filen", *file);
      }
    } else {
      printf("%s does not existn", *file);
    }
  }
  return 0;
}