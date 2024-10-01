#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h> // for stat
#include <unistd.h>   // for chdir, getcwd

int main(void) {
  char cwd[1024];
  if (getcwd(cwd, sizeof(cwd)) != NULL)
    printf("Current directory: %s\n", cwd);

  // check file and directory existence in current dir
  struct stat st;
  if (!stat("input.txt", &st)) {
    printf("File input.txt exists.\n");
  } else {
    printf("File input.txt does not exist.\n");
  }

  // check directory existence in current dir
  if (!stat("docs", &st) && S_ISDIR(st.st_mode)) {
    printf("Directory docs exists.\n");
  } else {
    printf("Directory docs does not exist.\n");
  }

  // change to root directory and check there
  if (chdir("/") != -1) {
    printf("Changed to root directory. Checking there...\n");

    // check file existence in root dir
    if (!stat("/input.txt", &st)) {
      printf("File /input.txt exists.\n");
    } else {
      printf("File /input.txt does not exist.\n");
    }

    // check directory existence in root dir
    if (!stat("/docs", &st) && S_ISDIR(st.st_mode)) {
      printf("Directory /docs exists.\n");
    } else {
      printf("Directory /docs does not exist.\n");
    }
  } else {
    printf("Failed to change to root directory!\n");
  }

  return 0;
}