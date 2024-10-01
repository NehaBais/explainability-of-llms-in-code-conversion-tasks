#include
#include
int main() {
  char *filenames[] = {"input.txt", "docs", "/input.txt", "/docs"};
  int i;
  for (i = 0; i < sizeof(filenames) / sizeof(char *); i++) {
    struct stat info;
    if (stat(filenames[i], &info) == 0) {
      if (S_ISDIR(info.st_mode)) {
        printf("%s is a directory\n", filenames[i]);
      } else {
        printf("%s is a file\n", filenames[i]);
      }
    } else {
      printf("%s does not exist\n", filenames[i]);
    }
  }
  return 0;
}