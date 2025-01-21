#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>

int file_exists(const char *filename) {
  FILE *file = fopen(filename, "r");
  if (file) {
    fclose(file);
    return 1; // File exists
  }
  return 0; // File does not exist
}

int directory_exists(const char *dirname) {
  DIR *dir = opendir(dirname);
  if (dir) {
    closedir(dir);
    return 1; // Directory exists
  }
  return 0; // Directory does not exist
}

int main() {
  const char *current_dir_input_file = "input.txt";
  const char *filesystem_root_input_file = "c:/input.txt";

  const char *current_dir_docs = "docs";
  const char *filesystem_root_docs = "c:/docs";

  printf("Checking for 'input.txt' in current working directory: %s\n",
         file_exists(current_dir_input_file) ? "Exists" : "Does not exist");
  printf("Checking for 'c:/input.txt': %s\n",
         file_exists(filesystem_root_input_file) ? "Exists" : "Does not exist");

  printf("Checking for 'docs' in current working directory: %s\n",
         directory_exists(current_dir_docs) ? "Exists" : "Does not exist");
  printf("Checking for 'c:/docs': %s\n",
         directory_exists(filesystem_root_docs) ? "Exists" : "Does not exist");

  return 0;
}