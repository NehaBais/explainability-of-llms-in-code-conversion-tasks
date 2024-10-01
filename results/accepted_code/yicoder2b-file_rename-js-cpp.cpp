#include <dirent.h>
#include <iostream>
using namespace std;
int main() {
  // Create File System Object
  FILE *fso = fopen("./input.txt", "r");
  if (!fso) {
    fprintf(stderr, "Error: Unable to open file 'input.txt'\n");
    return EXIT_FAILURE;
  }
  fclose(fso);

  // Rename the file
  rename("./output.txt", "./output.old");
  if (rename("./output.old", "./output.txt") == -1) {
    perror("Error:");
  }

  fso = fopen("./output.txt", "r");
  if (!fso) {
    fprintf(stderr, "Error: Unable to open file 'output.txt'\n");
    return EXIT_FAILURE;
  }
  fclose(fso);

  // Rename the directory
  rename("./mydocs", "./mymdocs");
  if (rename("./mymdocs", "./mydocs") == -1) {
    perror("Error:");
  }
  fso = fopen("./mydocs", "r");
  if (!fso) {
    fprintf(stderr, "Error: Unable to open directory 'mydocs'\n");
    return EXIT_FAILURE;
  }
  fclose(fso);

  // Rename the directory in root directory
  fso = fopen("/mydocs", "r");
  if (!fso) {
    fprintf(stderr, "/Error: Unable to open directory '/mydocs'\n");
    return EXIT_FAILURE;
  }
  fclose(fso);
  rename("/mymdocs", "/mydocs");
  if (rename("/mydocs", "/mymdocs") == -1) {
    perror("Error:");
  }
  return 0;
}