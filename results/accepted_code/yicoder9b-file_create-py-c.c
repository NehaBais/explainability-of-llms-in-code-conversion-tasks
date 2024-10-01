#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void create(char *directory) {
  FILE *fp = fopen("output.txt", "w+");
  fclose(fp);
  remove("output.txt"); // This will remove the file created by above line as it
                        // is empty and we don't need to write anything in it.
  chdir(directory);     // Change directory to specified path
  mkdir("docs", 0700); // Create an empty directory named "docs" with read/write
                       // permission for the owner only
  remove("docs"); // This will remove the directory created by above line as it
                  // is empty and we don't need to write anything in it.
}

int main() {
  create("."); // current directory
  create("/"); // root directory
  return 0;
}