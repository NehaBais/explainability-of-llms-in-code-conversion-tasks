#include <errno.h>
#include <stdio.h>
#include <sys/stat.h>

int main() {

  char *files[] = {"input.txt", "docs", "/input.txt", "/docs"};
    int len = sizeof(files)/sizeof(char*));
    for (int i = 0; i < len; i++) {
      struct stat file_stat;
      if (stat(files[i], &file_stat), errno != ENOENT) {
        if (file_stat.st_mode & S_IFDIR)) {
                printf("%s is a directory\n", files[i]));
          }
        else {
                printf("%s is a file\n", files[i]));
        }
      } else {
            printf("%s does not exist\n", files[i]));
      }
    }

    return 0;
}