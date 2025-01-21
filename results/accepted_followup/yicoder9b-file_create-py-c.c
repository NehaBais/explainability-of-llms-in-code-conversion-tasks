#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h> // Added to fix error, includes 'mkdir' function
#include <unistd.h>

void create(char *directory) {
  FILE *fp = fopen("output.txt", "w+");
  fclose(fp);
  remove("output.txt");
  chdir(directory);
  mkdir("docs", 0700); // Fixed the error here by including <sys/stat.h> header
                       // file which declares 'mkdir' function
  rmdir("docs"); // rmdir is used to remove directories, different from remove()
                 // for files
}

int main() {
  create("."); // current directory
  create("/"); // root directory
  return 0;
}